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

#define SYSTEM_RESOURCES_RESOURCEREADER_ALLOCATESTRINGFORNAMEINDEX_OFFSET UNITYSDK_OFFSET(0x1C8BE750)
#define SYSTEM_RESOURCES_RESOURCEREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1C8BDA90)
#define SYSTEM_RESOURCES_RESOURCEREADER_COMPARESTRINGEQUALSNAME_OFFSET UNITYSDK_OFFSET(0x1C8BE490)
#define SYSTEM_RESOURCES_RESOURCEREADER_DESERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C8C0650)
#define SYSTEM_RESOURCES_RESOURCEREADER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C8BDAF0)
#define SYSTEM_RESOURCES_RESOURCEREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C8BDB50)
#define SYSTEM_RESOURCES_RESOURCEREADER_FINDPOSFORRESOURCE_OFFSET UNITYSDK_OFFSET(0x1C8BDF40)
#define SYSTEM_RESOURCES_RESOURCEREADER_FINDTYPE_OFFSET UNITYSDK_OFFSET(0x1C8BFBC0)
#define SYSTEM_RESOURCES_RESOURCEREADER_GETENUMERATORINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C8BDEF0)
#define SYSTEM_RESOURCES_RESOURCEREADER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C8BDE60)
#define SYSTEM_RESOURCES_RESOURCEREADER_GETNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1C8BDC70)
#define SYSTEM_RESOURCES_RESOURCEREADER_GETNAMEPOSITION_OFFSET UNITYSDK_OFFSET(0x1C8BDCC0)
#define SYSTEM_RESOURCES_RESOURCEREADER_GETVALUEFORNAMEINDEX_OFFSET UNITYSDK_OFFSET(0x1C8BF3C0)
#define SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECTV1_OFFSET UNITYSDK_OFFSET(0x1C8BF6F0)
#define SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECTV2_OFFSET UNITYSDK_OFFSET(0x1C8BF800)
#define SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1C8C0020)
#define SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECT_OFFSET UNITYSDK_OFFSET(0x1C8BFFF0)
#define SYSTEM_RESOURCES_RESOURCEREADER_LOADSTRING_OFFSET UNITYSDK_OFFSET(0x1C8BF920)
#define SYSTEM_RESOURCES_RESOURCEREADER_READRESOURCES_OFFSET UNITYSDK_OFFSET(0x1C8BD950)
#define SYSTEM_RESOURCES_RESOURCEREADER_READUNALIGNEDI4_OFFSET UNITYSDK_OFFSET(0x1C8BDBB0)
#define SYSTEM_RESOURCES_RESOURCEREADER_SKIPSTRING_OFFSET UNITYSDK_OFFSET(0x1C8BDBC0)
#define SYSTEM_RESOURCES_RESOURCEREADER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C8BDDD0)
#define SYSTEM_RESOURCES_RESOURCEREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BD7E0)
#define SYSTEM_RESOURCES_RESOURCEREADER__LOADOBJECTV1_OFFSET UNITYSDK_OFFSET(0x1C8C0070)
#define SYSTEM_RESOURCES_RESOURCEREADER__LOADOBJECTV2_OFFSET UNITYSDK_OFFSET(0x1C8C07A0)
#define SYSTEM_RESOURCES_RESOURCEREADER__READRESOURCES_OFFSET UNITYSDK_OFFSET(0x1C8C1130)

namespace System::Resources
{
	inline static constexpr unsigned int ResourceReader_TypeDefinitionIndex = 515;

	class ResourceReader : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* _typeNamePositions; // 0x10
		::Il2CppArray<::System::Int32>* _nameHashes; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceLocator>* _resCache; // 0x20
		::System::IO::BinaryReader* _store; // 0x28
		::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* _objFormatter; // 0x30
		::Il2CppArray<::System::RuntimeType*>* _typeTable; // 0x38
		::System::IO::UnmanagedMemoryStream* _ums; // 0x40
		::Il2CppArray<::System::Int32>* _namePositions; // 0x48
		::System::Int32 _version; // 0x50
		::System::Int32 _numResources; // 0x54
		::System::Int32* _nameHashesPtr; // 0x58
		::System::Int64 _dataSectionOffset; // 0x60
		::System::Int64 _nameSectionOffset; // 0x68
		::System::Int32* _namePositionsPtr; // 0x70

		::System::Void _ctor(::System::IO::Stream* stream, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceLocator>* resCache)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Resources::ResourceLocator>*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER__CTOR_OFFSET))(this, stream, resCache);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_DISPOSE_1_OFFSET))(this, disposing);
		}

		static ::System::Int32 ReadUnalignedI4(::System::Int32* p)
		{
			return ((::System::Int32(*)(::System::Int32*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_READUNALIGNEDI4_OFFSET))(p);
		}

		::System::Void SkipString()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_SKIPSTRING_OFFSET))(this);
		}

		::System::Int32 GetNameHash(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_GETNAMEHASH_OFFSET))(this, index);
		}

		::System::Int32 GetNamePosition(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_GETNAMEPOSITION_OFFSET))(this, index);
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

		::System::Int32 FindPosForResource(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_FINDPOSFORRESOURCE_OFFSET))(this, name);
		}

		::System::Boolean CompareStringEqualsName(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_COMPARESTRINGEQUALSNAME_OFFSET))(this, name);
		}

		::System::String* AllocateStringForNameIndex(::System::Int32 index, ::System::Int32& dataOffset)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_ALLOCATESTRINGFORNAMEINDEX_OFFSET))(this, index, dataOffset);
		}

		::System::Object* GetValueForNameIndex(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_GETVALUEFORNAMEINDEX_OFFSET))(this, index);
		}

		::System::String* LoadString(::System::Int32 pos)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_LOADSTRING_OFFSET))(this, pos);
		}

		::System::Object* LoadObject(::System::Int32 pos)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECT_OFFSET))(this, pos);
		}

		::System::Object* LoadObject_1(::System::Int32 pos, ::System::Resources::ResourceTypeCode& typeCode)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Resources::ResourceTypeCode&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECT_1_OFFSET))(this, pos, typeCode);
		}

		::System::Object* LoadObjectV1(::System::Int32 pos)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECTV1_OFFSET))(this, pos);
		}

		::System::Object* _LoadObjectV1(::System::Int32 pos)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER__LOADOBJECTV1_OFFSET))(this, pos);
		}

		::System::Object* LoadObjectV2(::System::Int32 pos, ::System::Resources::ResourceTypeCode& typeCode)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Resources::ResourceTypeCode&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_LOADOBJECTV2_OFFSET))(this, pos, typeCode);
		}

		::System::Object* _LoadObjectV2(::System::Int32 pos, ::System::Resources::ResourceTypeCode& typeCode)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Resources::ResourceTypeCode&))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER__LOADOBJECTV2_OFFSET))(this, pos, typeCode);
		}

		::System::Object* DeserializeObject(::System::Int32 typeIndex)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_DESERIALIZEOBJECT_OFFSET))(this, typeIndex);
		}

		::System::Void ReadResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_READRESOURCES_OFFSET))(this);
		}

		::System::Void _ReadResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER__READRESOURCES_OFFSET))(this);
		}

		::System::RuntimeType* FindType(::System::Int32 typeIndex)
		{
			return ((::System::RuntimeType*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEREADER_FINDTYPE_OFFSET))(this, typeIndex);
		}
	};
}
