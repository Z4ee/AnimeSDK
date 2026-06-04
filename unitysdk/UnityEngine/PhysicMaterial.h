#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/PhysicMaterialCombine.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define UNITYENGINE_PHYSICMATERIAL_GET_BOUNCECOMBINE_OFFSET UNITYSDK_OFFSET(0x1B3273D0)
#define UNITYENGINE_PHYSICMATERIAL_GET_BOUNCINESS_OFFSET UNITYSDK_OFFSET(0x1B327350)
#define UNITYENGINE_PHYSICMATERIAL_GET_BOUNCYNESS_OFFSET UNITYSDK_OFFSET(0x1B3273F0)
#define UNITYENGINE_PHYSICMATERIAL_GET_DYNAMICFRICTION2_OFFSET UNITYSDK_OFFSET(0x1B327440)
#define UNITYENGINE_PHYSICMATERIAL_GET_DYNAMICFRICTION_OFFSET UNITYSDK_OFFSET(0x1B327370)
#define UNITYENGINE_PHYSICMATERIAL_GET_FRICTIONCOMBINE_OFFSET UNITYSDK_OFFSET(0x1B3273B0)
#define UNITYENGINE_PHYSICMATERIAL_GET_FRICTIONDIRECTION2_OFFSET UNITYSDK_OFFSET(0x1B327410)
#define UNITYENGINE_PHYSICMATERIAL_GET_FRICTIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B327480)
#define UNITYENGINE_PHYSICMATERIAL_GET_STATICFRICTION2_OFFSET UNITYSDK_OFFSET(0x1B327460)
#define UNITYENGINE_PHYSICMATERIAL_GET_STATICFRICTION_OFFSET UNITYSDK_OFFSET(0x1B327390)
#define UNITYENGINE_PHYSICMATERIAL_INTERNAL_CREATEDYNAMICSMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B327330)
#define UNITYENGINE_PHYSICMATERIAL_SET_BOUNCECOMBINE_OFFSET UNITYSDK_OFFSET(0x1B3273E0)
#define UNITYENGINE_PHYSICMATERIAL_SET_BOUNCINESS_OFFSET UNITYSDK_OFFSET(0x1B327360)
#define UNITYENGINE_PHYSICMATERIAL_SET_BOUNCYNESS_OFFSET UNITYSDK_OFFSET(0x1B327400)
#define UNITYENGINE_PHYSICMATERIAL_SET_DYNAMICFRICTION2_OFFSET UNITYSDK_OFFSET(0x1B327450)
#define UNITYENGINE_PHYSICMATERIAL_SET_DYNAMICFRICTION_OFFSET UNITYSDK_OFFSET(0x1B327380)
#define UNITYENGINE_PHYSICMATERIAL_SET_FRICTIONCOMBINE_OFFSET UNITYSDK_OFFSET(0x1B3273C0)
#define UNITYENGINE_PHYSICMATERIAL_SET_FRICTIONDIRECTION2_OFFSET UNITYSDK_OFFSET(0x1B327430)
#define UNITYENGINE_PHYSICMATERIAL_SET_FRICTIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B3274A0)
#define UNITYENGINE_PHYSICMATERIAL_SET_STATICFRICTION2_OFFSET UNITYSDK_OFFSET(0x1B327470)
#define UNITYENGINE_PHYSICMATERIAL_SET_STATICFRICTION_OFFSET UNITYSDK_OFFSET(0x1B3273A0)
#define UNITYENGINE_PHYSICMATERIAL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B327340)
#define UNITYENGINE_PHYSICMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3272F0)

namespace UnityEngine
{
	inline static constexpr unsigned int PhysicMaterial_TypeDefinitionIndex = 5299;

	class PhysicMaterial : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void Internal_CreateDynamicsMaterial(::UnityEngine::PhysicMaterial* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::PhysicMaterial*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_INTERNAL_CREATEDYNAMICSMATERIAL_OFFSET))(a1, a2);
		}

		::System::Single get_bounciness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_GET_BOUNCINESS_OFFSET))(this);
		}

		::System::Void set_bounciness(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_SET_BOUNCINESS_OFFSET))(this, a1);
		}

		::System::Single get_dynamicFriction()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_GET_DYNAMICFRICTION_OFFSET))(this);
		}

		::System::Void set_dynamicFriction(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_SET_DYNAMICFRICTION_OFFSET))(this, a1);
		}

		::System::Single get_staticFriction()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_GET_STATICFRICTION_OFFSET))(this);
		}

		::System::Void set_staticFriction(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_SET_STATICFRICTION_OFFSET))(this, a1);
		}

		::UnityEngine::PhysicMaterialCombine get_frictionCombine()
		{
			return ((::UnityEngine::PhysicMaterialCombine(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_GET_FRICTIONCOMBINE_OFFSET))(this);
		}

		::System::Void set_frictionCombine(::UnityEngine::PhysicMaterialCombine a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PhysicMaterialCombine))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_SET_FRICTIONCOMBINE_OFFSET))(this, a1);
		}

		::UnityEngine::PhysicMaterialCombine get_bounceCombine()
		{
			return ((::UnityEngine::PhysicMaterialCombine(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_GET_BOUNCECOMBINE_OFFSET))(this);
		}

		::System::Void set_bounceCombine(::UnityEngine::PhysicMaterialCombine a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PhysicMaterialCombine))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_SET_BOUNCECOMBINE_OFFSET))(this, a1);
		}

		::System::Single get_bouncyness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_GET_BOUNCYNESS_OFFSET))(this);
		}

		::System::Void set_bouncyness(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_SET_BOUNCYNESS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_frictionDirection2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_GET_FRICTIONDIRECTION2_OFFSET))(this);
		}

		::System::Void set_frictionDirection2(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_SET_FRICTIONDIRECTION2_OFFSET))(this, a1);
		}

		::System::Single get_dynamicFriction2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_GET_DYNAMICFRICTION2_OFFSET))(this);
		}

		::System::Void set_dynamicFriction2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_SET_DYNAMICFRICTION2_OFFSET))(this, a1);
		}

		::System::Single get_staticFriction2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_GET_STATICFRICTION2_OFFSET))(this);
		}

		::System::Void set_staticFriction2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_SET_STATICFRICTION2_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_frictionDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_GET_FRICTIONDIRECTION_OFFSET))(this);
		}

		::System::Void set_frictionDirection(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_SET_FRICTIONDIRECTION_OFFSET))(this, a1);
		}
	};
}
