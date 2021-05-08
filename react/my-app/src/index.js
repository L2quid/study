import React from 'react';
import ReactDOM from 'react-dom';
import './index.css';
import App from './App';
import reportWebVitals from './reportWebVitals';

function tick(){
  const ele= (
    <div>
      <h1>hello world!</h1>
      <div> it is {new Date().toLocaleTimeString()} </div>
    </div>
  );

  ReactDOM.render(
    ele,
    document.getElementById('root')
  );
}


// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
setInterval(tick,1000);
