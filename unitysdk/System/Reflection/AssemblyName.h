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

#define SYSTEM_REFLECTION_ASSEMBLYNAME_CLONE_OFFSET UNITYSDK_OFFSET(0x1BD8CB30)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_COMPUTEPUBLICKEYTOKEN_OFFSET UNITYSDK_OFFSET(0x1BD8C4B0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_CREATE_OFFSET UNITYSDK_OFFSET(0x1BD8CD20)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_FILLNAME_OFFSET UNITYSDK_OFFSET(0x1BD8B160)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GETASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x1BD8CC20)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GETNATIVENAME_OFFSET UNITYSDK_OFFSET(0x1BD8CCB0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1BD8C5C0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GETPUBLICKEYTOKEN_OFFSET UNITYSDK_OFFSET(0x1BD8C270)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GETPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x1BD8C260)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GET_CODEBASE_OFFSET UNITYSDK_OFFSET(0x1BD8BB60)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GET_CULTUREINFO_OFFSET UNITYSDK_OFFSET(0x1BD8BB70)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1BD8BB90)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x1BD8BBB0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GET_ISPUBLICKEYVALID_OFFSET UNITYSDK_OFFSET(0x1BD8C430)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BD8BB40)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GET_PUBLIC_TOKEN_OFFSET UNITYSDK_OFFSET(0x1BD8C570)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1BD8C220)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_INTERNALGETPUBLICKEYTOKEN_OFFSET UNITYSDK_OFFSET(0x1BD8C060)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1BD8CBC0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_PARSEASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x1BD8AEF0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_SETPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x1BD8A5B0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_SET_CULTUREINFO_OFFSET UNITYSDK_OFFSET(0x1BD8BB80)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1BD8BBA0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1BD8BB50)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1BD8A5D0)
#define SYSTEM_REFLECTION_ASSEMBLYNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BD8C230)
#define SYSTEM_REFLECTION_ASSEMBLYNAME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BD8AF00)
#define SYSTEM_REFLECTION_ASSEMBLYNAME__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BD8B720)
#define SYSTEM_REFLECTION_ASSEMBLYNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD8A5A0)

namespace System::Reflection
{
	inline static constexpr unsigned int AssemblyName_TypeDefinitionIndex = 597;

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

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME__CTOR_2_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean ParseAssemblyName(::System::IntPtr a1, ::Mono::MonoAssemblyName& a2, ::System::Boolean& a3, ::System::Boolean& a4)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::Mono::MonoAssemblyName&, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_PARSEASSEMBLYNAME_OFFSET))(a1, a2, a3, a4);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_CodeBase()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GET_CODEBASE_OFFSET))(this);
		}

		::System::Globalization::CultureInfo* get_CultureInfo()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GET_CULTUREINFO_OFFSET))(this);
		}

		::System::Void set_CultureInfo(::System::Globalization::CultureInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_SET_CULTUREINFO_OFFSET))(this, a1);
		}

		::System::Reflection::AssemblyNameFlags get_Flags()
		{
			return ((::System::Reflection::AssemblyNameFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_Flags(::System::Reflection::AssemblyNameFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::AssemblyNameFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_SET_FLAGS_OFFSET))(this, a1);
		}

		::System::String* get_FullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GET_FULLNAME_OFFSET))(this);
		}

		::System::Version* get_Version()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::Version* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_SET_VERSION_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_TOSTRING_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetPublicKey()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GETPUBLICKEY_OFFSET))(this);
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

		static ::System::Void get_public_token(::System::Byte* a1, ::System::Byte* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GET_PUBLIC_TOKEN_OFFSET))(a1, a2, a3);
		}

		::Il2CppArray<::System::Byte>* ComputePublicKeyToken()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_COMPUTEPUBLICKEYTOKEN_OFFSET))(this);
		}

		::System::Void SetPublicKey(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_SETPUBLICKEY_OFFSET))(this, a1);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_CLONE_OFFSET))(this);
		}

		::System::Void OnDeserialization(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_ONDESERIALIZATION_OFFSET))(this, a1);
		}

		static ::System::Reflection::AssemblyName* GetAssemblyName(::System::String* a1)
		{
			return ((::System::Reflection::AssemblyName*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GETASSEMBLYNAME_OFFSET))(a1);
		}

		static ::Mono::MonoAssemblyName* GetNativeName(::System::IntPtr a1)
		{
			return ((::Mono::MonoAssemblyName*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_GETNATIVENAME_OFFSET))(a1);
		}

		::System::Void FillName(::Mono::MonoAssemblyName* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::MonoAssemblyName*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_FILLNAME_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Reflection::AssemblyName* Create(::System::Reflection::Assembly* a1, ::System::Boolean a2)
		{
			return ((::System::Reflection::AssemblyName*(*)(::System::Reflection::Assembly*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLYNAME_CREATE_OFFSET))(a1, a2);
		}
	};
}
