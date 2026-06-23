#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/MonoAssemblyName.h"
#include "unitysdk/System/Configuration/Assemblies/AssemblyHashAlgorithm.h"
#include "unitysdk/System/Configuration/Assemblies/AssemblyVersionCompatibility.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/AssemblyContentType.h"
#include "unitysdk/System/Reflection/AssemblyNameFlags.h"
#include "unitysdk/System/Reflection/ProcessorArchitecture.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System { class Version; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class StrongNameKeyPair; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_ASSEMBLYNAME_CLONE_OFFSET UNITYSDK_OFFSET(0x1C9D38C0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_COMPUTEPUBLICKEYTOKEN_OFFSET UNITYSDK_OFFSET(0x1C9D3230)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_CREATE_OFFSET UNITYSDK_OFFSET(0x1C9D3A20)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_FILLNAME_OFFSET UNITYSDK_OFFSET(0x1C9D1E30)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GETNATIVENAME_OFFSET UNITYSDK_OFFSET(0x1C9D3A10)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C9D3380)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GETPUBLICKEYTOKEN_OFFSET UNITYSDK_OFFSET(0x1C9D2FC0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x1C9D2830)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GET_ISPUBLICKEYVALID_OFFSET UNITYSDK_OFFSET(0x1C9D31B0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C9D2820)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GET_PUBLIC_TOKEN_OFFSET UNITYSDK_OFFSET(0x1C9D3310)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_INTERNALGETPUBLICKEYTOKEN_OFFSET UNITYSDK_OFFSET(0x1C9D2CC0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1C9D3950)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_PARSEASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x1C9D1BC0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_SETPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x1C9D3360)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1C9D2EA0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C9D2F60)
#define SYSTEM_REFLECTION_ASSEMBLYNAME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C9D1BD0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C9D2380)
#define SYSTEM_REFLECTION_ASSEMBLYNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9D1BB0)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyName_TypeDefinitionIndex = 569;

	class AssemblyName : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::String* codebase; // 0x18
		::System::Int32 major; // 0x20
		::System::Int32 minor; // 0x24
		::System::Int32 build; // 0x28
		::System::Int32 revision; // 0x2C
		::System::Globalization::CultureInfo* cultureinfo; // 0x30
		::System::Reflection::AssemblyNameFlags flags; // 0x38
		::System::Configuration::Assemblies::AssemblyHashAlgorithm hashalg; // 0x3C
		::System::Reflection::StrongNameKeyPair* keypair; // 0x40
		::Il2CppArray<::System::Byte>* publicKey; // 0x48
		::Il2CppArray<::System::Byte>* keyToken; // 0x50
		::System::Configuration::Assemblies::AssemblyVersionCompatibility versioncompat; // 0x58
		::System::Version* version; // 0x60
		::System::Reflection::ProcessorArchitecture processor_architecture; // 0x68
		::System::Reflection::AssemblyContentType contentType; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* assemblyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME__CTOR_1_OFFSET))(this, assemblyName);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext sc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME__CTOR_2_OFFSET))(this, si, sc);
		}

		static ::System::Boolean ParseAssemblyName(::System::IntPtr name, ::Mono::MonoAssemblyName& aname, ::System::Boolean& is_version_definited, ::System::Boolean& is_token_defined)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::Mono::MonoAssemblyName&, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_PARSEASSEMBLYNAME_OFFSET))(name, aname, is_version_definited, is_token_defined);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GET_NAME_OFFSET))(this);
		}

		::System::String* get_FullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GET_FULLNAME_OFFSET))(this);
		}

		::System::Void set_Version(::System::Version* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_SET_VERSION_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_TOSTRING_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetPublicKeyToken()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GETPUBLICKEYTOKEN_OFFSET))(this);
		}

		::System::Boolean get_IsPublicKeyValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GET_ISPUBLICKEYVALID_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* InternalGetPublicKeyToken()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_INTERNALGETPUBLICKEYTOKEN_OFFSET))(this);
		}

		static ::System::Void get_public_token(::System::Byte* token, ::System::Byte* pubkey, ::System::Int32 len)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GET_PUBLIC_TOKEN_OFFSET))(token, pubkey, len);
		}

		::Il2CppArray<::System::Byte>* ComputePublicKeyToken()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_COMPUTEPUBLICKEYTOKEN_OFFSET))(this);
		}

		::System::Void SetPublicKey(::Il2CppArray<::System::Byte>* publicKey)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_SETPUBLICKEY_OFFSET))(this, publicKey);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_CLONE_OFFSET))(this);
		}

		::System::Void OnDeserialization(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_ONDESERIALIZATION_OFFSET))(this, sender);
		}

		static ::Mono::MonoAssemblyName* GetNativeName(::System::IntPtr assembly_ptr)
		{
			return ((::Mono::MonoAssemblyName*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GETNATIVENAME_OFFSET))(assembly_ptr);
		}

		::System::Void FillName(::Mono::MonoAssemblyName* native, ::System::String* codeBase, ::System::Boolean addVersion, ::System::Boolean addPublickey, ::System::Boolean defaultToken, ::System::Boolean assemblyRef)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::MonoAssemblyName*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_FILLNAME_OFFSET))(this, native, codeBase, addVersion, addPublickey, defaultToken, assemblyRef);
		}

		static ::System::Reflection::AssemblyName* Create(::System::Reflection::Assembly* assembly, ::System::Boolean fillCodebase)
		{
			return ((::System::Reflection::AssemblyName*(*)(::System::Reflection::Assembly*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_CREATE_OFFSET))(assembly, fillCodebase);
		}
	};
}
