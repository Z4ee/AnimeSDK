#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_UIELEMENTS_POINTERID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B362270)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerId_TypeDefinitionIndex = 6231;

	class PointerId : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_penPointerIdBase()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointerId_TypeDefinitionIndex)->GetStaticField(0xB50);
		}
		static ::System::Int32* StaticGet_invalidPointerId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointerId_TypeDefinitionIndex)->GetStaticField(0xB54);
		}
		static ::System::Int32* StaticGet_penPointerCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointerId_TypeDefinitionIndex)->GetStaticField(0xB58);
		}
		static ::System::Int32* StaticGet_mousePointerId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointerId_TypeDefinitionIndex)->GetStaticField(0xB5C);
		}
		static ::System::Int32* StaticGet_touchPointerIdBase()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointerId_TypeDefinitionIndex)->GetStaticField(0xB60);
		}
		static ::System::Int32* StaticGet_maxPointers()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointerId_TypeDefinitionIndex)->GetStaticField(0xB64);
		}
		static ::System::Int32* StaticGet_touchPointerCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointerId_TypeDefinitionIndex)->GetStaticField(0xB68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERID__CCTOR_OFFSET))();
		}
	};
}
