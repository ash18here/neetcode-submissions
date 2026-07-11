class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

                int i = 0, j = 0;
                        int s = 0;

                                vector<int> num3(m + n);

                                        while (i < m && j < n) {
                                                    if (nums1[i] >= nums2[j]) {
                                                                    num3[s] = nums2[j];
                                                                                    j++;
                                                                                                } else {
                                                                                                                num3[s] = nums1[i];
                                                                                                                                i++;
                                                                                                                                            }
                                                                                                                                                        s++;
                                                                                                                                                                }

                                                                                                                                                                        while (i < m) {
                                                                                                                                                                                    num3[s++] = nums1[i++];
                                                                                                                                                                                            }

                                                                                                                                                                                                    while (j < n) {
                                                                                                                                                                                                                num3[s++] = nums2[j++];
                                                                                                                                                                                                                        }

                                                                                                                                                                                                                                for (int k = 0; k < m + n; k++) {
                                                                                                                                                                                                                                            nums1[k] = num3[k];
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                        };
