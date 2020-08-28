import pandas as pd
import tensorflow as tf

파일경로 = 'https://raw.githubusercontent.com/blackdew/tensorflow1/master/csv/iris.csv'
아이리스 = pd.read_csv(파일경로)

아이리스 =pd.get_dummies(아이리스)
아이리스.head()
print(아이리스.columns)

독립 = 아이리스[['꽃잎길이', '꽃잎폭', '꽃받침길이', '꽃받침폭']]
종속 = 아이리스[['품종_setosa', '품종_versicolor','품종_virginica' ]]
print(독립.shape,종속.shape)


x=tf.keras.layers.Input(shape=[4])
H = tf.keras.layers.Dense(8, activation="swish")(x)
H = tf.keras.layers.Dense(8, activation="swish")(H)
H = tf.keras.layers.Dense(8, activation="swish")(H)
y=tf.keras.layers.Dense(3,activation='softmax')(H)
model=tf.keras.models.Model(x,y)
model.compile(loss='categorical_crossentropy', metrics='accuracy')

model.fit(독립,종속, epochs=1000, verbose=0)
model.fit(독립,종속, epochs=10)

print(model.predict(독립[45:55]))
print(종속[45:55])

print(model.get_weights())

