import React from 'react';
import ReactDOM from 'react-dom';
import './index.css';
import App from './App';
import reportWebVitals from './reportWebVitals';

function returnName(name) {
  return name.first + " " + name.last;
}

const name={
  first:"jae",
  last:"ung"
}
const ele= <h1>hello {returnName(name)}!</h1>

ReactDOM.render(
  ele,
  document.getElementById('root')
);

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
reportWebVitals();
