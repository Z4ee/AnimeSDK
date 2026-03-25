#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/PhysicMaterialCombine.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define UNITYENGINE_PHYSICMATERIAL_GET_BOUNCECOMBINE_OFFSET UNITYSDK_OFFSET(0x18A9EB00)
#define UNITYENGINE_PHYSICMATERIAL_GET_BOUNCINESS_OFFSET UNITYSDK_OFFSET(0x18A9EA80)
#define UNITYENGINE_PHYSICMATERIAL_GET_BOUNCYNESS_OFFSET UNITYSDK_OFFSET(0x18A9EB20)
#define UNITYENGINE_PHYSICMATERIAL_GET_DYNAMICFRICTION2_OFFSET UNITYSDK_OFFSET(0x18A9EB70)
#define UNITYENGINE_PHYSICMATERIAL_GET_DYNAMICFRICTION_OFFSET UNITYSDK_OFFSET(0x18A9EAA0)
#define UNITYENGINE_PHYSICMATERIAL_GET_FRICTIONCOMBINE_OFFSET UNITYSDK_OFFSET(0x18A9EAE0)
#define UNITYENGINE_PHYSICMATERIAL_GET_FRICTIONDIRECTION2_OFFSET UNITYSDK_OFFSET(0x18A9EB40)
#define UNITYENGINE_PHYSICMATERIAL_GET_FRICTIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x18A9EBB0)
#define UNITYENGINE_PHYSICMATERIAL_GET_STATICFRICTION2_OFFSET UNITYSDK_OFFSET(0x18A9EB90)
#define UNITYENGINE_PHYSICMATERIAL_GET_STATICFRICTION_OFFSET UNITYSDK_OFFSET(0x18A9EAC0)
#define UNITYENGINE_PHYSICMATERIAL_INTERNAL_CREATEDYNAMICSMATERIAL_OFFSET UNITYSDK_OFFSET(0x18A9EA60)
#define UNITYENGINE_PHYSICMATERIAL_SET_BOUNCECOMBINE_OFFSET UNITYSDK_OFFSET(0x18A9EB10)
#define UNITYENGINE_PHYSICMATERIAL_SET_BOUNCINESS_OFFSET UNITYSDK_OFFSET(0x18A9EA90)
#define UNITYENGINE_PHYSICMATERIAL_SET_BOUNCYNESS_OFFSET UNITYSDK_OFFSET(0x18A9EB30)
#define UNITYENGINE_PHYSICMATERIAL_SET_DYNAMICFRICTION2_OFFSET UNITYSDK_OFFSET(0x18A9EB80)
#define UNITYENGINE_PHYSICMATERIAL_SET_DYNAMICFRICTION_OFFSET UNITYSDK_OFFSET(0x18A9EAB0)
#define UNITYENGINE_PHYSICMATERIAL_SET_FRICTIONCOMBINE_OFFSET UNITYSDK_OFFSET(0x18A9EAF0)
#define UNITYENGINE_PHYSICMATERIAL_SET_FRICTIONDIRECTION2_OFFSET UNITYSDK_OFFSET(0x18A9EB60)
#define UNITYENGINE_PHYSICMATERIAL_SET_FRICTIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x18A9EBD0)
#define UNITYENGINE_PHYSICMATERIAL_SET_STATICFRICTION2_OFFSET UNITYSDK_OFFSET(0x18A9EBA0)
#define UNITYENGINE_PHYSICMATERIAL_SET_STATICFRICTION_OFFSET UNITYSDK_OFFSET(0x18A9EAD0)
#define UNITYENGINE_PHYSICMATERIAL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18A9EA70)
#define UNITYENGINE_PHYSICMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18A9EA20)

namespace UnityEngine
{
	inline static constexpr unsigned int PhysicMaterial_TypeDefinitionIndex = 5212;

	class PhysicMaterial : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL__CTOR_1_OFFSET))(this, name);
		}

		static ::System::Void Internal_CreateDynamicsMaterial(::UnityEngine::PhysicMaterial* mat, ::System::String* name)
		{
			return ((::System::Void(*)(::UnityEngine::PhysicMaterial*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_INTERNAL_CREATEDYNAMICSMATERIAL_OFFSET))(mat, name);
		}

		::System::Single get_bounciness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_GET_BOUNCINESS_OFFSET))(this);
		}

		::System::Void set_bounciness(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_SET_BOUNCINESS_OFFSET))(this, value);
		}

		::System::Single get_dynamicFriction()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_GET_DYNAMICFRICTION_OFFSET))(this);
		}

		::System::Void set_dynamicFriction(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_SET_DYNAMICFRICTION_OFFSET))(this, value);
		}

		::System::Single get_staticFriction()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_GET_STATICFRICTION_OFFSET))(this);
		}

		::System::Void set_staticFriction(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_SET_STATICFRICTION_OFFSET))(this, value);
		}

		::UnityEngine::PhysicMaterialCombine get_frictionCombine()
		{
			return ((::UnityEngine::PhysicMaterialCombine(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_GET_FRICTIONCOMBINE_OFFSET))(this);
		}

		::System::Void set_frictionCombine(::UnityEngine::PhysicMaterialCombine value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PhysicMaterialCombine))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_SET_FRICTIONCOMBINE_OFFSET))(this, value);
		}

		::UnityEngine::PhysicMaterialCombine get_bounceCombine()
		{
			return ((::UnityEngine::PhysicMaterialCombine(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_GET_BOUNCECOMBINE_OFFSET))(this);
		}

		::System::Void set_bounceCombine(::UnityEngine::PhysicMaterialCombine value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PhysicMaterialCombine))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_SET_BOUNCECOMBINE_OFFSET))(this, value);
		}

		::System::Single get_bouncyness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_GET_BOUNCYNESS_OFFSET))(this);
		}

		::System::Void set_bouncyness(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_SET_BOUNCYNESS_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_frictionDirection2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_GET_FRICTIONDIRECTION2_OFFSET))(this);
		}

		::System::Void set_frictionDirection2(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_SET_FRICTIONDIRECTION2_OFFSET))(this, value);
		}

		::System::Single get_dynamicFriction2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_GET_DYNAMICFRICTION2_OFFSET))(this);
		}

		::System::Void set_dynamicFriction2(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_SET_DYNAMICFRICTION2_OFFSET))(this, value);
		}

		::System::Single get_staticFriction2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_GET_STATICFRICTION2_OFFSET))(this);
		}

		::System::Void set_staticFriction2(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_SET_STATICFRICTION2_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_frictionDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_GET_FRICTIONDIRECTION_OFFSET))(this);
		}

		::System::Void set_frictionDirection(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICMATERIAL_SET_FRICTIONDIRECTION_OFFSET))(this, value);
		}
	};
}
