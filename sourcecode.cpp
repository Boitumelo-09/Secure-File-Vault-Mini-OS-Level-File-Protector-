/*
📦 Functionalities:
Add a new file

Prompt for filename, type (.txt, .png, etc.)

Randomly generate file size (or ask user)

Assign creation date (can use string)

List files

Display all files with metadata.

Search by filename

Delete a file

Rename a file (Bonus with setter usage)

Simulate Encryption (Bonus: reverse string or change characters)

Lock/Unlock file (Boolean flag for locked status)

 */

#include <iostream>

class File
{
private:
    std::string name;
    std::string type;
    double sizeMB;
    std::string createdDate;
    bool isLocked;

public:
    File(std::string name, std::string type, double size); // Constructor
    std::string getName() const;
    std::string getType() const;
    double getSize() const;
    std::string getDate() const;
    bool getLockStatus() const;

    void renameFile(std::string newName);
    void toggleLock();
};
struct FileNode
{
    File data;
    FileNode *next;
    FileNode(const File &file) : data(file), next(nullptr) {};
};

int main()
{
    FileNode *head = nullptr;
    system("cls");

    return 0;
}
