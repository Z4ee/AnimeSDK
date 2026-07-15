#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemVertexStream_TypeDefinitionIndex = 5783;

	enum class ParticleSystemVertexStream : ::System::Int32
	{
		Position = 0,
		Normal = 1,
		Tangent = 2,
		Color = 3,
		UV = 4,
		UV2 = 5,
		UV3 = 6,
		UV4 = 7,
		AnimBlend = 8,
		AnimFrame = 9,
		Center = 10,
		VertexID = 11,
		SizeX = 12,
		SizeXY = 13,
		SizeXYZ = 14,
		Rotation = 15,
		Rotation3D = 16,
		RotationSpeed = 17,
		RotationSpeed3D = 18,
		Velocity = 19,
		Speed = 20,
		AgePercent = 21,
		InvStartLifetime = 22,
		StableRandomX = 23,
		StableRandomXY = 24,
		StableRandomXYZ = 25,
		StableRandomXYZW = 26,
		VaryingRandomX = 27,
		VaryingRandomXY = 28,
		VaryingRandomXYZ = 29,
		VaryingRandomXYZW = 30,
		Custom1X = 31,
		Custom1XY = 32,
		Custom1XYZ = 33,
		Custom1XYZW = 34,
		Custom2X = 35,
		Custom2XY = 36,
		Custom2XYZ = 37,
		Custom2XYZW = 38,
		NoiseSumX = 39,
		NoiseSumXY = 40,
		NoiseSumXYZ = 41,
		NoiseImpulseX = 42,
		NoiseImpulseXY = 43,
		NoiseImpulseXYZ = 44,
		MeshIndex = 45,
	};
}
