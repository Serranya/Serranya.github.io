package main

import (
	"fmt"
	"strconv"
)

func main() {
	if parsed, err := strconv.Atoi("someVal"); err != nil {
		fmt.Println(err)
	} else {
		fmt.Println(parsed)
	}
}

