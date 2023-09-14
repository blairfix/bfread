# code is from here:
# https://rdrr.io/github/alistaire47/read.so/man/read.md.html

read.md <- function(file = clipr::read_clip(),
		    delim = '|',
		    stringsAsFactors = FALSE,
		    strip.white = TRUE,
		    ...){
    if (length(file) > 1) {
	lines <- file
    } else if (grepl('\n', file)) {
	con <- textConnection(file)
	lines <- readLines(con)
	close(con)
    } else {
	lines <- readLines(file)
    }
    lines <- lines[!grepl('^[\\:\\s\\+\\-\\=\\_\\|]*$', lines, perl = TRUE)]
    lines <- gsub('(^\\s*?\\|)|(\\|\\s*?$)', '', lines)
    utils::read.delim(text = paste(lines, collapse = '\n'), sep = delim,
		      stringsAsFactors = stringsAsFactors,
		      strip.white = strip.white, ...)
}

read_md <- function(file = clipr::read_clip(),
		    delim = '|',
		    trim_ws = TRUE,
		    ...){
    if (length(file) > 1) {
	lines <- file
    } else {
	lines <- readr::read_lines(file)
    }
    lines <- lines[!grepl('^[\\:\\s\\+\\-\\=\\_\\|]*$', lines, perl = TRUE)]
    lines <- gsub('(^\\s*?\\|)|(\\|\\s*?$)', '', lines)
    readr::read_delim(paste(lines, collapse = '\n'), delim = delim,
		      trim_ws = trim_ws, ...)
}

