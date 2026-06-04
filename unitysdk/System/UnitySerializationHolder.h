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

#define SYSTEM_UNITYSERIALIZATIONHOLDER_ADDELEMENTTYPES_OFFSET UNITYSDK_OFFSET(0x18659450)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1865A050)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x1865A0B0)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_GETUNITYSERIALIZATIONINFO_1_OFFSET UNITYSDK_OFFSET(0x18659860)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_GETUNITYSERIALIZATIONINFO_2_OFFSET UNITYSDK_OFFSET(0x18659B50)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_GETUNITYSERIALIZATIONINFO_OFFSET UNITYSDK_OFFSET(0x18659390)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_MAKEELEMENTTYPES_OFFSET UNITYSDK_OFFSET(0x18659740)
#define SYSTEM_UNITYSERIALIZATIONHOLDER_THROWINSUFFICIENTINFORMATION_OFFSET UNITYSDK_OFFSET(0x18659FB0)
#define SYSTEM_UNITYSERIALIZATIONHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x18659CE0)

namespace System
{
	inline static constexpr unsigned int UnitySerializationHolder_TypeDefinitionIndex = 359;

	class UnitySerializationHolder : public ::System::Object
	{
	public:
		::System::String* m_assemblyName; // 0x10
		::System::String* m_data; // 0x18
		::Il2CppArray<::System::Type*>* m_instantiation; // 0x20
		::System::Type* m_declaringType; // 0x28
		::System::Reflection::MethodBase* m_declaringMethod; // 0x30
		::Il2CppArray<::System::Int32>* m_elementTypes; // 0x38
		::System::Int32 m_genericParameterPosition; // 0x40
		::System::Int32 m_unityType; // 0x44

		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void GetUnitySerializationInfo(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Reflection::Missing* a2)
		{
			return ((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Reflection::Missing*))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_GETUNITYSERIALIZATIONINFO_OFFSET))(a1, a2);
		}

		static ::System::RuntimeType* AddElementTypes(::System::Runtime::Serialization::SerializationInfo* a1, ::System::RuntimeType* a2)
		{
			return ((::System::RuntimeType*(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_ADDELEMENTTYPES_OFFSET))(a1, a2);
		}

		::System::Type* MakeElementTypes(::System::Type* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_MAKEELEMENTTYPES_OFFSET))(this, a1);
		}

		static ::System::Void GetUnitySerializationInfo_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::RuntimeType* a2)
		{
			return ((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_GETUNITYSERIALIZATIONINFO_1_OFFSET))(a1, a2);
		}

		static ::System::Void GetUnitySerializationInfo_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Int32 a2, ::System::String* a3, ::System::Reflection::RuntimeAssembly* a4)
		{
			return ((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Int32, ::System::String*, ::System::Reflection::RuntimeAssembly*))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_GETUNITYSERIALIZATIONINFO_2_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void ThrowInsufficientInformation(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_THROWINSUFFICIENTINFORMATION_OFFSET))(this, a1);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_UNITYSERIALIZATIONHOLDER_GETREALOBJECT_OFFSET))(this, a1);
		}
	};
}
