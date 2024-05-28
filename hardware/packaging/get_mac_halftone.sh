#! /bin/sh
# Use a shell script to download a larger PNG image.  GitHub has
# bandwidth limits, so let's try to keep away from those as much as
# possible.

# NOTE: Processing from original photo:
# Crop to: upper left corner 1737,2087 size 1164x1374
# Adjust brightness/contrast when converting to grayscale

convert -transpose -flip -crop 1164x1374+1737+423 -grayscale Rec709Luma -brightness-contrast 10,70 photos/DSC_4197.JPG mac_halftone.png
