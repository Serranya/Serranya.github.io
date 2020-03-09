package main

import (
	"fmt"
	"strconv"
)

func main() {
	if parsed, err := myFunc(); err != nil {
		fmt.Println(err)
	} else {
		fmt.Println(parsed)
	}
}

func myFunc() (int, error) {
	if parsed, err := strconv.Atoi("someVal"); err != nil {
		return 0, err
	} else {
		return parsed, nil
	}
}
