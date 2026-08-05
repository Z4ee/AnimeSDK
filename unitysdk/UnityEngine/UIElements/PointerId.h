#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_UIELEMENTS_POINTERID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0056C0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerId_TypeDefinitionIndex = 28157;

	class PointerId : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_penPointerCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointerId_TypeDefinitionIndex)->GetStaticField(0x76F0);
		}
		static ::System::Int32* StaticGet_touchPointerCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointerId_TypeDefinitionIndex)->GetStaticField(0x76F4);
		}
		static ::System::Int32* StaticGet_maxPointers()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointerId_TypeDefinitionIndex)->GetStaticField(0x76F8);
		}
		static ::System::Int32* StaticGet_penPointerIdBase()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointerId_TypeDefinitionIndex)->GetStaticField(0x76FC);
		}
		static ::System::Int32* StaticGet_touchPointerIdBase()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointerId_TypeDefinitionIndex)->GetStaticField(0x7700);
		}
		static ::System::Int32* StaticGet_invalidPointerId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointerId_TypeDefinitionIndex)->GetStaticField(0x7704);
		}
		static ::System::Int32* StaticGet_mousePointerId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointerId_TypeDefinitionIndex)->GetStaticField(0x7708);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERID__CCTOR_OFFSET))();
		}
	};
}
