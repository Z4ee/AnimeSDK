#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_UIELEMENTS_POINTERID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDF6650)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerId_TypeDefinitionIndex = 5969;

	class PointerId : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_touchPointerCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointerId_TypeDefinitionIndex)->GetStaticField(0x8F90);
		}
		static ::System::Int32* StaticGet_penPointerCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointerId_TypeDefinitionIndex)->GetStaticField(0x8F94);
		}
		static ::System::Int32* StaticGet_penPointerIdBase()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointerId_TypeDefinitionIndex)->GetStaticField(0x8F98);
		}
		static ::System::Int32* StaticGet_invalidPointerId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointerId_TypeDefinitionIndex)->GetStaticField(0x8F9C);
		}
		static ::System::Int32* StaticGet_maxPointers()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointerId_TypeDefinitionIndex)->GetStaticField(0x8FA0);
		}
		static ::System::Int32* StaticGet_mousePointerId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointerId_TypeDefinitionIndex)->GetStaticField(0x8FA4);
		}
		static ::System::Int32* StaticGet_touchPointerIdBase()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PointerId_TypeDefinitionIndex)->GetStaticField(0x8FA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERID__CCTOR_OFFSET))();
		}
	};
}
