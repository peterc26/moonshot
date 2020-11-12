#pragma once

constexpr float FPS = 144.0f;
constexpr float DT = 1.0f / FPS;

constexpr float PLAYER_SPEED = 100.0f;

/** Width of a mirror in game units. */
constexpr float MIRROR_WIDTH = 16.0f;

/** The length of the laser when rendered, in game units */
constexpr float LASER_LEN = 16.0f;
constexpr float LASER_SPEED = 800.0f;
constexpr float MIN_LASER_LENGTH = 400.0f;

/** Lower makes the camera snap to the desired position slower, makes the
 * camera feel 'looser', as if it were on a much looser elastic band. A value
 * of 1 will make the camera perfectly track the desired position. A value of 0
 * will stop the camera moving. */
constexpr float CAMERA_SNAP_SPEED = 0.05;

/** Basic enemy movement speed */
constexpr float ENEMY_BASIC_WALK_SPEED = 50.0f;
