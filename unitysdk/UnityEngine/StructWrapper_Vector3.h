#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define UNITYENGINE_STRUCTWRAPPER_VECTOR3_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x283610)
#define UNITYENGINE_STRUCTWRAPPER_VECTOR3_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x9DC540)
#define UNITYENGINE_STRUCTWRAPPER_VECTOR3_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x9DC540)
#define UNITYENGINE_STRUCTWRAPPER_VECTOR3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define UNITYENGINE_STRUCTWRAPPER_VECTOR3_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x9DC4E0)
#define UNITYENGINE_STRUCTWRAPPER_VECTOR3_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x9DC560)
#define UNITYENGINE_STRUCTWRAPPER_VECTOR3_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x9DC540)
#define UNITYENGINE_STRUCTWRAPPER_VECTOR3_UNREALTYPES_ISTRUCT_UNITYENGINE_VECTOR3__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x283610)
#define UNITYENGINE_STRUCTWRAPPER_VECTOR3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1AC230)

namespace UnityEngine
{
	inline static constexpr unsigned int StructWrapper_Vector3_TypeDefinitionIndex = 27662;

	struct alignas(1) StructWrapper_Vector3
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StructWrapper_Vector3_TypeDefinitionIndex)->GetStaticField(0x227B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_STRUCTWRAPPER_VECTOR3__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STRUCTWRAPPER_VECTOR3_GET_STATICSTRUCT_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector3 DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNITYENGINE_STRUCTWRAPPER_VECTOR3_DEFAULTCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::UnityEngine::Vector3 CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNITYENGINE_STRUCTWRAPPER_VECTOR3_COPYCREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::UnityEngine::Vector3 MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNITYENGINE_STRUCTWRAPPER_VECTOR3_MOVECREATE_OFFSET))(this, allocator);
		}
		*/

		/*
		::System::Void CopyAssign(::UnityEngine::Vector3& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_STRUCTWRAPPER_VECTOR3_COPYASSIGN_OFFSET))(this, other);
		}
		*/

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STRUCTWRAPPER_VECTOR3_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_STRUCTWRAPPER_VECTOR3_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		/*
		::System::Void UnrealTypes_IStruct_UnityEngine_Vector3__CopyAssign(::UnityEngine::Vector3& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_STRUCTWRAPPER_VECTOR3_UNREALTYPES_ISTRUCT_UNITYENGINE_VECTOR3__COPYASSIGN_OFFSET))(this, other);
		}
		*/
	};
}
