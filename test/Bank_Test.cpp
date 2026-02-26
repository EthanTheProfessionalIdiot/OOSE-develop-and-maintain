#include "gtest/gtest.h"
#include "Bank.h"
#include "User.h"

class BankTest : public ::testing::Test
{
protected:
    Bank bank;

    User CreateTestUser()
    {
        return User("Ethan", "12345");
    }
};

TEST_F(BankTest, AddUserIncreasesUserCount)
{
    User user = CreateTestUser();
    bank.AddUser(user);

    EXPECT_EQ(bank.GetUserCount(), 1);
}

TEST_F(BankTest, AddMultipleUsers)
{
    bank.AddUser(User("Ethan", "123"));
    bank.AddUser(User("Alice", "456"));

    EXPECT_EQ(bank.GetUserCount(), 2);
}

TEST_F(BankTest, GetUsersReturnsCorrectUsers)
{
    User u1("Ethan", "111");
    User u2("Alice", "222");

    bank.AddUser(u1);
    bank.AddUser(u2);

    std::vector<User> users = bank.getUsers();

    ASSERT_EQ(users.size(), 2);
    EXPECT_EQ(users[0].getName(), "Ethan");   // Assuming User has getName()
    EXPECT_EQ(users[1].getName(), "Alice");
}
