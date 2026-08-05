#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/AllocatorManager_AllocatorHandle.h"
#include "unitysdk/Unity/Collections/AllocatorManager_Block.h"

#define UNITY_COLLECTIONS_ALLOCATORMANAGER_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x1FC0C710)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_FREE_1_OFFSET UNITYSDK_OFFSET(0x1FC0CA30)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_FREE_OFFSET UNITYSDK_OFFSET(0x1FC0C980)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_TRYLEGACY_OFFSET UNITYSDK_OFFSET(0x1FC0CB60)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER_TRY_OFFSET UNITYSDK_OFFSET(0x1FC0C8B0)
#define UNITY_COLLECTIONS_ALLOCATORMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC0CC00)

namespace Unity::Collections
{
	inline static constexpr unsigned int AllocatorManager_TypeDefinitionIndex = 18853;

	class AllocatorManager : public ::System::Object
	{
	public:
		static ::Unity::Collections::AllocatorManager_AllocatorHandle* StaticGet_None()
		{
			return (::Unity::Collections::AllocatorManager_AllocatorHandle*)Il2CppClass::FromTypeDefinitionIndex(AllocatorManager_TypeDefinitionIndex)->GetStaticField(0x4130);
		}
		static ::Unity::Collections::AllocatorManager_AllocatorHandle* StaticGet_Invalid()
		{
			return (::Unity::Collections::AllocatorManager_AllocatorHandle*)Il2CppClass::FromTypeDefinitionIndex(AllocatorManager_TypeDefinitionIndex)->GetStaticField(0x4134);
		}
		static ::Unity::Collections::AllocatorManager_AllocatorHandle* StaticGet_Persistent()
		{
			return (::Unity::Collections::AllocatorManager_AllocatorHandle*)Il2CppClass::FromTypeDefinitionIndex(AllocatorManager_TypeDefinitionIndex)->GetStaticField(0x4138);
		}
		static ::Unity::Collections::AllocatorManager_AllocatorHandle* StaticGet_Temp()
		{
			return (::Unity::Collections::AllocatorManager_AllocatorHandle*)Il2CppClass::FromTypeDefinitionIndex(AllocatorManager_TypeDefinitionIndex)->GetStaticField(0x413C);
		}
		static ::Unity::Collections::AllocatorManager_AllocatorHandle* StaticGet_AudioKernel()
		{
			return (::Unity::Collections::AllocatorManager_AllocatorHandle*)Il2CppClass::FromTypeDefinitionIndex(AllocatorManager_TypeDefinitionIndex)->GetStaticField(0x4140);
		}
		static ::Unity::Collections::AllocatorManager_AllocatorHandle* StaticGet_TempJob()
		{
			return (::Unity::Collections::AllocatorManager_AllocatorHandle*)Il2CppClass::FromTypeDefinitionIndex(AllocatorManager_TypeDefinitionIndex)->GetStaticField(0x4144);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void* Allocate(::Unity::Collections::AllocatorManager_AllocatorHandle handle, ::System::Int32 itemSizeInBytes, ::System::Int32 alignmentInBytes, ::System::Int32 items)
		{
			return ((::System::Void*(*)(::Unity::Collections::AllocatorManager_AllocatorHandle, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_ALLOCATE_OFFSET))(handle, itemSizeInBytes, alignmentInBytes, items);
		}

		static ::System::Void Free(::Unity::Collections::AllocatorManager_AllocatorHandle handle, ::System::Void* pointer, ::System::Int32 itemSizeInBytes, ::System::Int32 alignmentInBytes, ::System::Int32 items)
		{
			return ((::System::Void(*)(::Unity::Collections::AllocatorManager_AllocatorHandle, ::System::Void*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_FREE_OFFSET))(handle, pointer, itemSizeInBytes, alignmentInBytes, items);
		}

		static ::System::Void Free_1(::Unity::Collections::AllocatorManager_AllocatorHandle handle, ::System::Void* pointer)
		{
			return ((::System::Void(*)(::Unity::Collections::AllocatorManager_AllocatorHandle, ::System::Void*))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_FREE_1_OFFSET))(handle, pointer);
		}

		static ::System::Int32 TryLegacy(::Unity::Collections::AllocatorManager_Block& block)
		{
			return ((::System::Int32(*)(::Unity::Collections::AllocatorManager_Block&))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_TRYLEGACY_OFFSET))(block);
		}

		static ::System::Int32 Try(::Unity::Collections::AllocatorManager_Block& block)
		{
			return ((::System::Int32(*)(::Unity::Collections::AllocatorManager_Block&))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_ALLOCATORMANAGER_TRY_OFFSET))(block);
		}
	};
}
