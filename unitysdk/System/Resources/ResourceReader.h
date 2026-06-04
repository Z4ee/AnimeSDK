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

#define SYSTEM_RESOURCES_RESOURCEREADER_ALLOCATESTRINGFORNAMEINDEX_OFFSET UNITYSDK_OFFSET(0x18768640)
#define SYSTEM_RESOURCES_RESOURCEREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x187677A0)
#define SYSTEM_RESOURCES_RESOURCEREADER_COMPARESTRINGEQUALSNAME_OFFSET UNITYSDK_OFFSET(0x18768300)
#define SYSTEM_RESOURCES_RESOURCEREADER_DESERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1876A4D0)
#define SYSTEM_RESOURCES_RESOURCEREADER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x18767800)
#define SYSTEM_RESOURCES_RESOURCEREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18767860)
#define SYSTEM_RESOURCES_RESOURCEREADER_FINDPOSFORRESOURCE_OFFSET UNITYSDK_OFFSET(0x18767C60)
#define SYSTEM_RESOURCES_RESOURCEREADER_FINDTYPE_OFFSET UNITYSDK_OFFSET(0x18769AB0)
#define SYSTEM_RESOURCES_RESOURCEREADER_GETENUMERATORINTERNAL_OFFSET UNITYSDK_OFFSET(0x18767C10)
#define SYSTEM_RESOURCES_RESOURCEREADER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18767B70)
#define SYSTEM_RESOURCES_RESOURCEREADER_GETNAMEHASH_OFFSET UNITYSDK_OFFSET(0x18767990)
#define SYSTEM_RESOURCES_RESOURCEREADER_GETNAMEPOSITION_OFFSET UNITYSDK_OFFSET(0x187679D0)
#define SYSTEM_RESOURCES_RESOURCEREADER_GETVALUEFORNAMEINDEX_OFFSET UNITYSDK_OFFSET(0x187692B0)
#define SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECTV1_OFFSET UNITYSDK_OFFSET(0x187695C0)
#define SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECTV2_OFFSET UNITYSDK_OFFSET(0x187696E0)
#define SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECT_1_OFFSET UNITYSDK_OFFSET(0x18769ED0)
#define SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECT_OFFSET UNITYSDK_OFFSET(0x18769EA0)
#define SYSTEM_RESOURCES_RESOURCEREADER_LOADSTRING_OFFSET UNITYSDK_OFFSET(0x18769810)
#define SYSTEM_RESOURCES_RESOURCEREADER_READRESOURCES_OFFSET UNITYSDK_OFFSET(0x18767650)
#define SYSTEM_RESOURCES_RESOURCEREADER_READUNALIGNEDI4_OFFSET UNITYSDK_OFFSET(0x187678C0)
#define SYSTEM_RESOURCES_RESOURCEREADER_SKIPSTRING_OFFSET UNITYSDK_OFFSET(0x187678D0)
#define SYSTEM_RESOURCES_RESOURCEREADER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18767AE0)
#define SYSTEM_RESOURCES_RESOURCEREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x18767500)
#define SYSTEM_RESOURCES_RESOURCEREADER__LOADOBJECTV1_OFFSET UNITYSDK_OFFSET(0x18769F20)
#define SYSTEM_RESOURCES_RESOURCEREADER__LOADOBJECTV2_OFFSET UNITYSDK_OFFSET(0x1876A630)
#define SYSTEM_RESOURCES_RESOURCEREADER__READRESOURCES_OFFSET UNITYSDK_OFFSET(0x1876B0F0)

namespace System::Resources
{
	inline static constexpr unsigned int ResourceReader_TypeDefinitionIndex = 527;

	class ResourceReader : public ::System::Object
	{
	public:
		::Il2CppArray<::System::RuntimeType*>* _typeTable; // 0x10
		::Il2CppArray<::System::Int32>* _nameHashes; // 0x18
		::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* _objFormatter; // 0x20
		::Il2CppArray<::System::Int32>* _namePositions; // 0x28
		::Il2CppArray<::System::Int32>* _typeNamePositions; // 0x30
		::System::IO::BinaryReader* _store; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceLocator>* _resCache; // 0x40
		::System::IO::UnmanagedMemoryStream* _ums; // 0x48
		::System::Int64 _nameSectionOffset; // 0x50
		::System::Int32 _version; // 0x58
		::System::Int32 _numResources; // 0x5C
		::System::Int32* _nameHashesPtr; // 0x60
		::System::Int32* _namePositionsPtr; // 0x68
		::System::Int64 _dataSectionOffset; // 0x70

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
