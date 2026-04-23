#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace UnityEngine { class Rigidbody2D; }

#define UNITYENGINE_JOINT2D_GET_CONNECTEDBODY_OFFSET UNITYSDK_OFFSET(0x1A4D4E10)

namespace UnityEngine
{
	inline static constexpr unsigned int Joint2D_TypeDefinitionIndex = 5207;

	class Joint2D : public ::UnityEngine::Behaviour
	{
	public:
		::UnityEngine::Rigidbody2D* get_connectedBody()
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOINT2D_GET_CONNECTEDBODY_OFFSET))(this);
		}
	};
}
