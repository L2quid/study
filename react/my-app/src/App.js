import logo from './logo.svg';
import './App.css';
import Comment from './Comment';
import React from 'react';

class App extends React.Component {
    constructor(props) {
        super(props);
        this.state = {
            comment: [
                { name: 'QuiD_X1', content: 'Hello' },
                { name: 'QuiD_X2', content: 'Hello' },
                { name: 'QuiD_X3', content: 'Hello' },
            ],
        };
    }

    render() {
        const { comment } = this.state;
        return (
            <div className="App">
                <header className="App-header">
                    <img src={logo} className="App-logo" alt="logo" />
                    <p>
                        Edit <code>src/App.js</code> and save to reload.
                    </p>
                    <a
                        className="App-link"
                        href="https://reactjs.org"
                        target="_blank"
                        rel="noopener noreferrer"
                    >
                        Learn React
                    </a>
                    {comment.map((comment, index) => {
                        return <Comment name={comment.name} content={comment.content} />;
                    })}
                </header>
            </div>
        );
    }
}

export default App;