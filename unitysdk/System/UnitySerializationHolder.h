#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class RuntimeType; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class Missing; }
namespace System::Reflection { class RuntimeAssembly; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_UNITYSERIALIZATIONHOLDER_ADDELEMENTTYPES_OFFSET UNITYSDK_OFFSET(0x1BA307C0)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1BA313C0)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x1BA31420)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_GETUNITYSERIALIZATIONINFO_1_OFFSET UNITYSDK_OFFSET(0x1BA30B50)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_GETUNITYSERIALIZATIONINFO_2_OFFSET UNITYSDK_OFFSET(0x1BA30E90)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_GETUNITYSERIALIZATIONINFO_OFFSET UNITYSDK_OFFSET(0x1BA306D0)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_MAKEELEMENTTYPES_OFFSET UNITYSDK_OFFSET(0x1BA30A20)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_THROWINSUFFICIENTINFORMATION_OFFSET UNITYSDK_OFFSET(0x1BA31320)
#define SYSTEM_UNITYSERIALIZATIONHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA31050)

namespace System
{
	inline static constexpr unsigned int UnitySerializationHolder_TypeDefinitionIndex = 350;

	class UnitySerializationHolder : public ::System::Object
	{
	public:
		::System::Type* m_declaringType; // 0x10
		::Il2CppArray<::System::Int32>* m_elementTypes; // 0x18
		::Il2CppArray<::System::Type*>* m_instantiation; // 0x20
		::System::String* m_assemblyName; // 0x28
		::System::String* m_data; // 0x30
		::System::Reflection::MethodBase* m_declaringMethod; // 0x38
		::System::Int32 m_unityType; // 0x40
		::System::Int32 m_genericParameterPosition; // 0x44

		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER__CTOR_OFFSET))(this, info, context);
		}

		static ::System::Void GetUnitySerializationInfo(::System::Runtime::Serialization::SerializationInfo* info, ::System::Reflection::Missing* missing)
		{
			return ((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Reflection::Missing*))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_GETUNITYSERIALIZATIONINFO_OFFSET))(info, missing);
		}

		static ::System::RuntimeType* AddElementTypes(::System::Runtime::Serialization::SerializationInfo* info, ::System::RuntimeType* type)
		{
			return ((::System::RuntimeType*(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_ADDELEMENTTYPES_OFFSET))(info, type);
		}

		::System::Type* MakeElementTypes(::System::Type* type)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_MAKEELEMENTTYPES_OFFSET))(this, type);
		}

		static ::System::Void GetUnitySerializationInfo_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::RuntimeType* type)
		{
			return ((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_GETUNITYSERIALIZATIONINFO_1_OFFSET))(info, type);
		}

		static ::System::Void GetUnitySerializationInfo_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Int32 unityType, ::System::String* data, ::System::Reflection::RuntimeAssembly* assembly)
		{
			return ((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Int32, ::System::String*, ::System::Reflection::RuntimeAssembly*))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_GETUNITYSERIALIZATIONINFO_2_OFFSET))(info, unityType, data, assembly);
		}

		::System::Void ThrowInsufficientInformation(::System::String* field)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_THROWINSUFFICIENTINFORMATION_OFFSET))(this, field);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_GETREALOBJECT_OFFSET))(this, context);
		}
	};
}
