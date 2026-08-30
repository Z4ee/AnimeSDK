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

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_CREATEOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x1946DE20)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1946DFC0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_CREATE_OFFSET UNITYSDK_OFFSET(0x1946DF30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1946D800)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1946CC50)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ObjectMap_TypeDefinitionIndex = 1163;

	class ObjectMap : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* typeInformationA; // 0x10
		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo; // 0x18
		::System::Type* objectType; // 0x20
		::Il2CppArray<::System::Type*>* memberTypes; // 0x28
		::Il2CppArray<::System::String*>* memberNames; // 0x30
		::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA; // 0x38
		::System::String* objectName; // 0x40
		::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo; // 0x48
		::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader; // 0x50
		::System::Int32 objectId; // 0x58
		::System::Boolean isInitObjectInfo; // 0x5C

		::System::Void _ctor(::System::String* a1, ::System::Type* a2, ::Il2CppArray<::System::String*>* a3, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* a4, ::System::Int32 a5, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::Il2CppArray<::System::String*>*, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, ::System::Int32, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_1(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* a3, ::Il2CppArray<::System::Object*>* a4, ::Il2CppArray<::System::Int32>* a5, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* a6, ::System::Int32 a7, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* a8, ::System::Runtime::Serialization::Formatters::Binary::SizedArray* a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Int32>*, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, ::System::Int32, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, ::System::Runtime::Serialization::Formatters::Binary::SizedArray*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateObjectInfo(::System::Runtime::Serialization::SerializationInfo*& a1, ::Il2CppArray<::System::Object*>*& a2)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*&, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_CREATEOBJECTINFO_OFFSET))(this, a1, a2);
		}

		static ::System::Runtime::Serialization::Formatters::Binary::ObjectMap* Create(::System::String* a1, ::System::Type* a2, ::Il2CppArray<::System::String*>* a3, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* a4, ::System::Int32 a5, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* a6)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::ObjectMap*(*)(::System::String*, ::System::Type*, ::Il2CppArray<::System::String*>*, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, ::System::Int32, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Runtime::Serialization::Formatters::Binary::ObjectMap* Create_1(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* a3, ::Il2CppArray<::System::Object*>* a4, ::Il2CppArray<::System::Int32>* a5, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* a6, ::System::Int32 a7, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* a8, ::System::Runtime::Serialization::Formatters::Binary::SizedArray* a9)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::ObjectMap*(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Int32>*, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, ::System::Int32, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, ::System::Runtime::Serialization::Formatters::Binary::SizedArray*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTMAP_CREATE_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
	};
}
