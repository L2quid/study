import React from 'react';

const style = {
    root: {
        width: '20%',
        margin: 'auto',
        padding: 16,
        backgroundColor: 'white',
        borderRadius: 16,
    },
    nameText: {
        color: 'black',
        fontSize: 20,
        fontWeight: '700',
    },
    contentText: {
        color: 'black',
        fontSize: 16,
    },
};

class Comment extends React.Component {
    render() {
        const { name, content } = this.props;

        return (
            <div style={style.root}>
                <div style={style.nameText}>{name}</div>
                <div style={style.contentText}>{content}</div>
            </div>
        );
    }
}
export default Comment;