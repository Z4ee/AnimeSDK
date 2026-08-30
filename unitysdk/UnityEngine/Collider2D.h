#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Rigidbody2D; }

#define UNITYENGINE_COLLIDER2D_GET_ATTACHEDRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1EFB1230)
#define UNITYENGINE_COLLIDER2D_OVERLAPPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EFB1260)
#define UNITYENGINE_COLLIDER2D_OVERLAPPOINT_OFFSET UNITYSDK_OFFSET(0x1EFB1240)
#define UNITYENGINE_COLLIDER2D_SET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x1EFB1200)
#define UNITYENGINE_COLLIDER2D_SET_USEDBYCOMPOSITE_OFFSET UNITYSDK_OFFSET(0x1EFB1220)
#define UNITYENGINE_COLLIDER2D_SET_USEDBYEFFECTOR_OFFSET UNITYSDK_OFFSET(0x1EFB1210)
#define UNITYENGINE_COLLIDER2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB11C0)

namespace UnityEngine
{
	inline static constexpr unsigned int Collider2D_TypeDefinitionIndex = 5805;

	class Collider2D : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D__CTOR_OFFSET))(this);
		}

		::System::Void set_isTrigger(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_SET_ISTRIGGER_OFFSET))(this, a1);
		}

		::System::Void set_usedByEffector(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_SET_USEDBYEFFECTOR_OFFSET))(this, a1);
		}

		::System::Void set_usedByComposite(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_SET_USEDBYCOMPOSITE_OFFSET))(this, a1);
		}

		::UnityEngine::Rigidbody2D* get_attachedRigidbody()
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_GET_ATTACHEDRIGIDBODY_OFFSET))(this);
		}

		::System::Boolean OverlapPoint(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_OVERLAPPOINT_OFFSET))(this, a1);
		}

		::System::Boolean OverlapPoint_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDER2D_OVERLAPPOINT_INJECTED_OFFSET))(this, a1);
		}
	};
}
