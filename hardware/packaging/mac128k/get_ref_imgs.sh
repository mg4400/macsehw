#! /bin/sh
# Use a shell script to download a larger PNG image.  GitHub has
# bandwidth limits, so let's try to keep away from those as much as
# possible.

# Get the Macintosh 128k box reference images, transformed from angled
# photos sourced from a probably now-expired Ebay listing.

git show images:hardware/packaging/mac128k/front_face.jpg >front_face.jpg
git show images:hardware/packaging/mac128k/side_face.jpg >side_face.jpg
