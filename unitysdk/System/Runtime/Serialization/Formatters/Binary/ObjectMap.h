#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/BinaryTypeEnum.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryAssemblyInfo; }
namespace System::Runtime::Serialization::Formatters::Binary { class ObjectReader; }
namespace System::Runtime::Serialization::Formatters::Binary { class ReadObjectInfo; }
namespace System::Runtime::Serialization::Formatters::Binary { class SizedArray; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_CREATEOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x17A00F80)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_CREATE_1_OFFSET UNITYSDK_OFFSET(0x17A01120)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_CREATE_OFFSET UNITYSDK_OFFSET(0x17A01090)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A00920)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x179FFDF0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ObjectMap_TypeDefinitionIndex = 1155;

	class ObjectMap : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo; // 0x10
		::Il2CppArray<::System::String*>* memberNames; // 0x18
		::System::String* objectName; // 0x20
		::Il2CppArray<::System::Object*>* typeInformationA; // 0x28
		::Il2CppArray<::System::Type*>* memberTypes; // 0x30
		::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader; // 0x38
		::System::Type* objectType; // 0x40
		::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA; // 0x48
		::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo; // 0x50
		::System::Int32 objectId; // 0x58
		::System::Boolean isInitObjectInfo; // 0x5C

		::System::Void _ctor(::System::String* objectName, ::System::Type* objectType, ::Il2CppArray<::System::String*>* memberNames, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, ::System::Int32 objectId, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::Il2CppArray<::System::String*>*, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, ::System::Int32, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP__CTOR_OFFSET))(this, objectName, objectType, memberNames, objectReader, objectId, assemblyInfo);
		}

		::System::Void _ctor_1(::System::String* objectName, ::Il2CppArray<::System::String*>* memberNames, ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA, ::Il2CppArray<::System::Object*>* typeInformationA, ::Il2CppArray<::System::Int32>* memberAssemIds, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, ::System::Int32 objectId, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, ::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Int32>*, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, ::System::Int32, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, ::System::Runtime::Serialization::Formatters::Binary::SizedArray*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP__CTOR_1_OFFSET))(this, objectName, memberNames, binaryTypeEnumA, typeInformationA, memberAssemIds, objectReader, objectId, assemblyInfo, assemIdToAssemblyTable);
		}

		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateObjectInfo(::System::Runtime::Serialization::SerializationInfo*& si, ::Il2CppArray<::System::Object*>*& memberData)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*&, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_CREATEOBJECTINFO_OFFSET))(this, si, memberData);
		}

		static ::System::Runtime::Serialization::Formatters::Binary::ObjectMap* Create(::System::String* name, ::System::Type* objectType, ::Il2CppArray<::System::String*>* memberNames, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, ::System::Int32 objectId, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::ObjectMap*(*)(::System::String*, ::System::Type*, ::Il2CppArray<::System::String*>*, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, ::System::Int32, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_CREATE_OFFSET))(name, objectType, memberNames, objectReader, objectId, assemblyInfo);
		}

		static ::System::Runtime::Serialization::Formatters::Binary::ObjectMap* Create_1(::System::String* name, ::Il2CppArray<::System::String*>* memberNames, ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA, ::Il2CppArray<::System::Object*>* typeInformationA, ::Il2CppArray<::System::Int32>* memberAssemIds, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, ::System::Int32 objectId, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, ::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::ObjectMap*(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Int32>*, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, ::System::Int32, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, ::System::Runtime::Serialization::Formatters::Binary::SizedArray*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_CREATE_1_OFFSET))(name, memberNames, binaryTypeEnumA, typeInformationA, memberAssemIds, objectReader, objectId, assemblyInfo, assemIdToAssemblyTable);
		}
	};
}
