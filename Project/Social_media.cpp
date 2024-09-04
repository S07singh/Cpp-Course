#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Post {
public:
    string username;
    string content;

    Post(string username, string content) {
        this->username = username;
        this->content = content;
    }

    void displayPost() {
        cout << username << " says: " << content << endl;
    }
};

class User {
public:
    string username;
    string password;
    vector<Post> posts;

    User(string username, string password) {
        this->username = username;
        this->password = password;
    }

    void createPost(string content) {
        Post newPost(username, content);
        posts.push_back(newPost);
    }

    void displayPosts() {
        for (auto &post : posts) {
            post.displayPost();
        }
    }
};

class SocialMediaPlatform {
public:
    vector<User> users;

    bool userExists(string username) {
        for (auto &user : users) {
            if (user.username == username) {
                return true;
            }
        }
        return false;
    }

    void registerUser(string username, string password) {
        if (userExists(username)) {
            cout << "Username already exists!" << endl;
            return;
        }
        users.emplace_back(username, password);
        cout << "User registered successfully!" << endl;
    }

    User* loginUser(string username, string password) {
        for (auto &user : users) {
            if (user.username == username && user.password == password) {
                cout << "Login successful!" << endl;
                return &user;
            }
        }
        cout << "Invalid username or password!" << endl;
        return nullptr;
    }

    void displayAllPosts() {
        cout << "\n--- All Posts ---" << endl;
        for (auto &user : users) {
            user.displayPosts();
        }
        cout << "-----------------" << endl;
    }
};

int main() {
    SocialMediaPlatform platform;
    int choice;
    User *currentUser = nullptr;

    do {
        cout << "\n1. Register\n2. Login\n3. Create Post\n4. View All Posts\n5. Logout\n6. Exit\nChoose an option: ";
        cin >> choice;

        if (choice == 1) {
            string username, password;
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> password;
            platform.registerUser(username, password);

        } else if (choice == 2) {
            string username, password;
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> password;
            currentUser = platform.loginUser(username, password);

        } else if (choice == 3) {
            if (currentUser) {
                string content;
                cout << "Enter your post content: ";
                cin.ignore();
                getline(cin, content);
                currentUser->createPost(content);
                cout << "Post created successfully!" << endl;
            } else {
                cout << "You must be logged in to create a post!" << endl;
            }

        } else if (choice == 4) {
            platform.displayAllPosts();

        } else if (choice == 5) {
            currentUser = nullptr;
            cout << "Logged out successfully!" << endl;

        } else if (choice == 6) {
            cout << "Exiting..." << endl;

        } else {
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 6);

    return 0;
}
