# -*- coding: utf-8 -*-
"""
Created on Wed Jan  9 16:57:12 2019

@author: Isaac

3분 딥러닝 텐서플로맛
텐서플로 연습 1

"""

import tensorflow as tf
import numpy as np

x_data = np.array([[0,0], [1,0], [1,1], [0,0], [0,0], [0,1]])

y_data = np.array([
        [1,0,0],
        [0,1,0],
        [0,0,1],
        [1,0,0],
        [1,0,0],
        [0,0,1],
        ])

X = tf.placeholder(tf.float32)
Y = tf.placeholder(tf.float32)

W = tf.Variable(tf.random_uniform([2,3], -1., 1.))
b = tf.Variable(tf.zeros([3]))

L = tf.add(tf.matmul(X,W), b)
L = tf.nn.relu(L)

model = tf.nn.softmax(L)
cost = tf.reduce_mean(-tf.reduce_sum(Y * tf.log(model), axis=1))

optimizer = tf.train.GradientDescentOptimizer(learning_rate=0.01)
train_op = optimizer.minimize(cost)

init = tf.global_variables_initializer()
sess = tf.Session()
sess.run(init)

for step in range(100) :
    sess.run(train_op, feed_dict={X: x_data, Y: y_data})
    
    if (step+1 % 10 == 0) :
        print(step+1, sess.run(cost, feed_dict={X: x_data, Y: y_data}))
    

prediction = tf.argmax(model, axis=1)
target = tf.argmax(Y, axis=1)
print("예측값 : ", sess.run(prediction, feed_dict={X: x_data}))
print("실제값 : ", sess.run(target, feed_dict={Y: y_data}))

is_correct = tf.equal(prediction, target)
accuracy = tf.reduce_mean(tf.cast(is_correct, tf.float32))
print("정확도 : %.2f" % sess.run(accuracy*100, feed_dict={X: x_data, Y: y_data}))

