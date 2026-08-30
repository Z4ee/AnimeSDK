#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Resources/ResourceLocator.h"
#include "unitysdk/System/Resources/ResourceTypeCode.h"

namespace System { class RuntimeType; }
namespace System { class String; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class Stream; }
namespace System::IO { class UnmanagedMemoryStream; }
namespace System::Resources { class ResourceReader_ResourceEnumerator; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryFormatter; }

#define SYSTEM_RESOURCES_RESOURCEREADER_ALLOCATESTRINGFORNAMEINDEX_OFFSET UNITYSDK_OFFSET(0x1C44CF50)
#define SYSTEM_RESOURCES_RESOURCEREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1C44BC20)
#define SYSTEM_RESOURCES_RESOURCEREADER_COMPARESTRINGEQUALSNAME_OFFSET UNITYSDK_OFFSET(0x1C44CBA0)
#define SYSTEM_RESOURCES_RESOURCEREADER_DESERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C44FB60)
#define SYSTEM_RESOURCES_RESOURCEREADER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C44BCE0)
#define SYSTEM_RESOURCES_RESOURCEREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C44BDA0)
#define SYSTEM_RESOURCES_RESOURCEREADER_FINDPOSFORRESOURCE_OFFSET UNITYSDK_OFFSET(0x1C44C2E0)
#define SYSTEM_RESOURCES_RESOURCEREADER_FINDTYPE_OFFSET UNITYSDK_OFFSET(0x1C44EBC0)
#define SYSTEM_RESOURCES_RESOURCEREADER_GETENUMERATORINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C44C290)
#define SYSTEM_RESOURCES_RESOURCEREADER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C44C1E0)
#define SYSTEM_RESOURCES_RESOURCEREADER_GETNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1C44C000)
#define SYSTEM_RESOURCES_RESOURCEREADER_GETNAMEPOSITION_OFFSET UNITYSDK_OFFSET(0x1C44C040)
#define SYSTEM_RESOURCES_RESOURCEREADER_GETVALUEFORNAMEINDEX_OFFSET UNITYSDK_OFFSET(0x1C44E030)
#define SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECTV1_OFFSET UNITYSDK_OFFSET(0x1C44E590)
#define SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECTV2_OFFSET UNITYSDK_OFFSET(0x1C44E6B0)
#define SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1C44F2D0)
#define SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECT_OFFSET UNITYSDK_OFFSET(0x1C44F2A0)
#define SYSTEM_RESOURCES_RESOURCEREADER_LOADSTRING_OFFSET UNITYSDK_OFFSET(0x1C44E7E0)
#define SYSTEM_RESOURCES_RESOURCEREADER_READRESOURCES_OFFSET UNITYSDK_OFFSET(0x1C44BAD0)
#define SYSTEM_RESOURCES_RESOURCEREADER_READUNALIGNEDI4_OFFSET UNITYSDK_OFFSET(0x1C44BE60)
#define SYSTEM_RESOURCES_RESOURCEREADER_SKIPSTRING_OFFSET UNITYSDK_OFFSET(0x1C44BE70)
#define SYSTEM_RESOURCES_RESOURCEREADER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C44C150)
#define SYSTEM_RESOURCES_RESOURCEREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C44BA20)
#define SYSTEM_RESOURCES_RESOURCEREADER__LOADOBJECTV1_OFFSET UNITYSDK_OFFSET(0x1C44F320)
#define SYSTEM_RESOURCES_RESOURCEREADER__LOADOBJECTV2_OFFSET UNITYSDK_OFFSET(0x1C44FD30)
#define SYSTEM_RESOURCES_RESOURCEREADER__READRESOURCES_OFFSET UNITYSDK_OFFSET(0x1C451040)

namespace System::Resources
{
	inline static constexpr unsigned int ResourceReader_TypeDefinitionIndex = 530;

	class ResourceReader : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceLocator>* _resCache; // 0x10
		::Il2CppArray<::System::RuntimeType*>* _typeTable; // 0x18
		::System::IO::BinaryReader* _store; // 0x20
		::System::IO::UnmanagedMemoryStream* _ums; // 0x28
		::Il2CppArray<::System::Int32>* _nameHashes; // 0x30
		::Il2CppArray<::System::Int32>* _typeNamePositions; // 0x38
		::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* _objFormatter; // 0x40
		::Il2CppArray<::System::Int32>* _namePositions; // 0x48
		::System::Int32 _version; // 0x50
		::System::Int32 _numResources; // 0x54
		::System::Int64 _dataSectionOffset; // 0x58
		::System::Int32* _namePositionsPtr; // 0x60
		::System::Int32* _nameHashesPtr; // 0x68
		::System::Int64 _nameSectionOffset; // 0x70

		::System::Void _ctor(::System::IO::Stream* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceLocator>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceLocator>*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_DISPOSE_1_OFFSET))(this, a1);
		}

		static ::System::Int32 ReadUnalignedI4(::System::Int32* a1)
		{
			return ((::System::Int32(*)(::System::Int32*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_READUNALIGNEDI4_OFFSET))(a1);
		}

		::System::Void SkipString()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_SKIPSTRING_OFFSET))(this);
		}

		::System::Int32 GetNameHash(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_GETNAMEHASH_OFFSET))(this, a1);
		}

		::System::Int32 GetNamePosition(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_GETNAMEPOSITION_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_GETENUMERATOR_OFFSET))(this);
		}

		::System::Resources::ResourceReader_ResourceEnumerator* GetEnumeratorInternal()
		{
			return ((::System::Resources::ResourceReader_ResourceEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_GETENUMERATORINTERNAL_OFFSET))(this);
		}

		::System::Int32 FindPosForResource(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_FINDPOSFORRESOURCE_OFFSET))(this, a1);
		}

		::System::Boolean CompareStringEqualsName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_COMPARESTRINGEQUALSNAME_OFFSET))(this, a1);
		}

		::System::String* AllocateStringForNameIndex(::System::Int32 a1, ::System::Int32& a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_ALLOCATESTRINGFORNAMEINDEX_OFFSET))(this, a1, a2);
		}

		::System::Object* GetValueForNameIndex(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_GETVALUEFORNAMEINDEX_OFFSET))(this, a1);
		}

		::System::String* LoadString(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_LOADSTRING_OFFSET))(this, a1);
		}

		::System::Object* LoadObject(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECT_OFFSET))(this, a1);
		}

		::System::Object* LoadObject_1(::System::Int32 a1, ::System::Resources::ResourceTypeCode& a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Resources::ResourceTypeCode&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECT_1_OFFSET))(this, a1, a2);
		}

		::System::Object* LoadObjectV1(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECTV1_OFFSET))(this, a1);
		}

		::System::Object* _LoadObjectV1(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER__LOADOBJECTV1_OFFSET))(this, a1);
		}

		::System::Object* LoadObjectV2(::System::Int32 a1, ::System::Resources::ResourceTypeCode& a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Resources::ResourceTypeCode&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECTV2_OFFSET))(this, a1, a2);
		}

		::System::Object* _LoadObjectV2(::System::Int32 a1, ::System::Resources::ResourceTypeCode& a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Resources::ResourceTypeCode&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER__LOADOBJECTV2_OFFSET))(this, a1, a2);
		}

		::System::Object* DeserializeObject(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_DESERIALIZEOBJECT_OFFSET))(this, a1);
		}

		::System::Void ReadResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_READRESOURCES_OFFSET))(this);
		}

		::System::Void _ReadResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER__READRESOURCES_OFFSET))(this);
		}

		::System::RuntimeType* FindType(::System::Int32 a1)
		{
			return ((::System::RuntimeType*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_FINDTYPE_OFFSET))(this, a1);
		}
	};
}
