use std::fs::File;
use std::io::Result;

fn main() {
    let _ = match my_func() {
        Ok(file) => file,
        Err(error) => {
            panic!("Problem opening the file: {:?}", error)
        },
    };
}

fn my_func() -> Result<File> {
    let file = File::open("hello.txt")?;
    print!("Successfully opened file {:?}", file);
    Ok(file)
}
