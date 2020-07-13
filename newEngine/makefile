CC = em++
all: *.cpp *.h
	$(CC) *.cpp -O3 -s TOTAL_MEMORY=134217728 -s ALLOW_MEMORY_GROWTH=1 -s WASM=1 -s ASSERTIONS=1 \
	-s SAFE_HEAP=1 -s WARN_UNALIGNED=1 -fsanitize=undefined -Wcast-align -Wover-aligned \
	-o index.html


