for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    if (prices.empty()) {
        cout << 0 << endl;
        return 0;
    }

    int min_price = prices[0];
    int max_profit = 0;

    for (int i = 1; i < n; i++) {
        if (prices[i] < min_price) {
            min_price = prices[i];
        } else {
            max_profit = max(max_profit, prices[i] - min_price);
        }
    }

    cout << max_profit << endl;