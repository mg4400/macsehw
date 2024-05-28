#! /bin/sh
# Use a shell script to download a larger PNG image.  GitHub has
# bandwidth limits, so let's try to keep away from those as much as
# possible.

# SOURCE PHOTO that was processed:
curl -L -O https://web.archive.org/web/20201010002142id_/https://i.ebayimg.com/images/g/RFkAAOSwKaVfJwAd/s-l1600.jpg
# NOTE: Processing from original photo:
# Crop to: upper left corner 606,687 size 456x524
# Adjust brightness/contrast when converting to grayscale
convert -crop 456x524+606+687 -grayscale Rec709Luma -brightness-contrast 20,70 s-l1600.jpg mac_halftone.png
