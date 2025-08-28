namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
    enum class AccountStatus {
    troll = 0,
    guest = 1,
    user = 2,
    mod = 3,
    };

// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
    enum class Action  {
    read,
    write,
    remove
    };
// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
    bool display_post(AccountStatus poster, AccountStatus viewer){
        return !(
            (poster == AccountStatus::troll && viewer == AccountStatus::user) ||
            (poster == AccountStatus::troll && viewer == AccountStatus::guest) ||
            (poster == AccountStatus::troll && viewer == AccountStatus::mod)
            );
    }

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
    bool permission_check(Action action, AccountStatus account){
        return !((action == Action::write && account == AccountStatus::guest) ||
                (action == Action::remove && (account == AccountStatus::guest || account == AccountStatus::user || account == AccountStatus::troll)));
    }

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
    bool valid_player_combination(AccountStatus account, AccountStatus account_2){
        return ((account == AccountStatus::user && account_2 == AccountStatus::user)|| (account == AccountStatus::mod && account_2 == AccountStatus::mod) || (account == AccountStatus::user && account_2 == AccountStatus::mod) || (account == AccountStatus::mod && account_2 == AccountStatus::user) || (account == AccountStatus::troll && account_2 == AccountStatus::troll));
    }

// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
    bool has_priority(AccountStatus account, AccountStatus account_2){
        return static_cast<int>(account) > static_cast<int>(account_2);
    }

}  // namespace hellmath