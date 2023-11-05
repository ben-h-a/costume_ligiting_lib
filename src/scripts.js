function send_update(query_data) {
    const keyValueStrings = [];
    for (const key in query_data) {
        if (query_data.hasOwnProperty(key)) {
            keyValueStrings.push(`${key}=${query_data[key]}`);
        }
    }
    const query_string = keyValueStrings.join('&')
    const xhr = new XMLHttpRequest();
    xhr.open('GET', '/update?' + query_string, true);

    // Send the request
    xhr.send();
}

function get_query_update(input, query_data) {
    if (input.type === 'checkbox') {
        query_data[input.id] = input.checked ? 1 : 0;
    } else {
        query_data[input.id] = input.value;
    }
}

function body_load() {
    const inputElements = document.querySelectorAll('input');

    // Create an array to store key-value pairs
    const data = [];

    // Iterate over input elements and collect their values
    inputElements.forEach(function (input) {
        get_query_update(input, data);
    });
    // Create a query string by joining the key-value pairs
    send_update(data)
    // Create a GET request to /update with the query string
}



function update_input(input) {
    const data = []
    get_query_update(input, data)
    send_update(data)
}

function nav_onclick() {
}