#include<iostream>
int main () {
  const int image_width = 256, image_height = 256;
  std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";
  for (int j = image_height-1; j >= 0; j--) {
    for (int i = 0; i < image_width; i++) {
      double r = double(i) / (image_width - 1);
      double g = double(j) / (image_height - 1);
      double b = 0.25;

      int int_r = static_cast<int>(255.999 * r);
      int int_g = static_cast<int>(255.999 * g);
      int int_b = static_cast<int>(255.999 * b);

      std::cout << int_r << ' ' << int_g << ' ' << int_b << '\n';
    }
  }
}