

class TestDataEmptyArray {
public:
    static vector<int> get_array() {
        // complete this function
        vector<int> v{};
        return v;
    }

};

class TestDataUniqueValues {
public:
    static vector<int> get_array() {
        // complete this function
        vector<int> v{2,54,6,1,64};
        return v;

    }

    static int get_expected_result() {
        // complete this function
        return 3;
    }

};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() {
        // complete this function
        vector<int> v{12,34,6,3,23,34,3,11};
        return v;
    }

    static int get_expected_result() {
        // complete this function
        return 3;
    }

};

