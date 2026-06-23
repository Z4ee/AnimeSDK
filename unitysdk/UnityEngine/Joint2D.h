#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace UnityEngine { class Rigidbody2D; }

#define UNITYENGINE_JOINT2D_GET_CONNECTEDBODY_OFFSET UNITYSDK_OFFSET(0x1DF8B520)
#define UNITYENGINE_JOINT2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF87C70)

namespace UnityEngine
{
	inline static constexpr unsigned int Joint2D_TypeDefinitionIndex = 18394;

	class Joint2D : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOINT2D__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rigidbody2D* get_connectedBody()
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_JOINT2D_GET_CONNECTEDBODY_OFFSET))(this);
		}
	};
}
