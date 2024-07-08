#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        double B, t1, a1, t2, a2;
        cin >> B >> t1 >> a1 >> t2 >> a2;

        double f1_end, f2_end;

        if (t2 >= t1 + a1 / B) {
            // Non-overlapping case
            f1_end = t1 + a1 / B;
            f2_end = t2 + a2 / B;
        } else if (t2 <= t1) {
            // Both files start at the same time
            double total_size = a1 + a2;
            double total_time = total_size / (B / 2);
            f1_end = f2_end = t1 + total_time;
        } else {
            // Overlapping case
            // Time until the second file starts
            double time_until_t2 = t2 - t1;
            double downloaded_first_by_t2 = time_until_t2 * B;
            double remaining_first = a1 - downloaded_first_by_t2;

            // Time to finish both files together
            double combined_size = remaining_first + a2;
            double combined_time = combined_size / (B / 2);

            f1_end = t2 + combined_time;
            f2_end = t2 + combined_time;
        }

        cout << fixed << setprecision(9) << f1_end << " " << f2_end << endl;
    }

    return 0;
}
