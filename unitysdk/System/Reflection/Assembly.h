#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/MonoAssemblyName.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/AssemblyNameFlags.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Threading/StackCrawlMark.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System { class Version; }
namespace System::Globalization { class CultureInfo; }
namespace System::IO { class Stream; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection { class Assembly_ResolveEventHolder; }
namespace System::Reflection { class ManifestResourceInfo; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeAssembly; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Policy { class Evidence; }

#define SYSTEM_REFLECTION_ASSEMBLY_CREATENIE_OFFSET UNITYSDK_OFFSET(0x17995170)
#define SYSTEM_REFLECTION_ASSEMBLY_EQUALS_OFFSET UNITYSDK_OFFSET(0x17995110)
#define SYSTEM_REFLECTION_ASSEMBLY_GETAOTID_OFFSET UNITYSDK_OFFSET(0x17993DA0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETASSEMBLY_OFFSET UNITYSDK_OFFSET(0x179946C0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETCALLINGASSEMBLY_OFFSET UNITYSDK_OFFSET(0x17994FD0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETCODEBASE_OFFSET UNITYSDK_OFFSET(0x17993DB0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x17993EC0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x17993EB0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETEXECUTINGASSEMBLY_OFFSET UNITYSDK_OFFSET(0x17994F80)
#define SYSTEM_REFLECTION_ASSEMBLY_GETEXPORTEDTYPES_OFFSET UNITYSDK_OFFSET(0x179945C0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETFLAGS_OFFSET UNITYSDK_OFFSET(0x17994540)
#define SYSTEM_REFLECTION_ASSEMBLY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17995100)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCEINFOINTERNAL_OFFSET UNITYSDK_OFFSET(0x17994FF0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCEINFO_OFFSET UNITYSDK_OFFSET(0x17995000)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x17993ED0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCENAMES_OFFSET UNITYSDK_OFFSET(0x17994F70)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCESTREAM_1_OFFSET UNITYSDK_OFFSET(0x17994340)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCESTREAM_2_OFFSET UNITYSDK_OFFSET(0x17994490)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCESTREAM_OFFSET UNITYSDK_OFFSET(0x17993EE0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMODULESINTERNAL_OFFSET UNITYSDK_OFFSET(0x17994F00)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMODULES_OFFSET UNITYSDK_OFFSET(0x179952C0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMODULE_OFFSET UNITYSDK_OFFSET(0x17995270)
#define SYSTEM_REFLECTION_ASSEMBLY_GETNAME_1_OFFSET UNITYSDK_OFFSET(0x179946A0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETNAME_OFFSET UNITYSDK_OFFSET(0x17994650)
#define SYSTEM_REFLECTION_ASSEMBLY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x17993E50)
#define SYSTEM_REFLECTION_ASSEMBLY_GETPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x179944E0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETSIMPLENAME_OFFSET UNITYSDK_OFFSET(0x179944B0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETTYPES_1_OFFSET UNITYSDK_OFFSET(0x179945A0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETTYPES_OFFSET UNITYSDK_OFFSET(0x17994570)
#define SYSTEM_REFLECTION_ASSEMBLY_GETTYPE_1_OFFSET UNITYSDK_OFFSET(0x17994600)
#define SYSTEM_REFLECTION_ASSEMBLY_GETTYPE_2_OFFSET UNITYSDK_OFFSET(0x17995220)
#define SYSTEM_REFLECTION_ASSEMBLY_GETTYPE_OFFSET UNITYSDK_OFFSET(0x179945E0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETVERSION_OFFSET UNITYSDK_OFFSET(0x17994510)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_CODEBASE_OFFSET UNITYSDK_OFFSET(0x17993DC0)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_CODE_BASE_OFFSET UNITYSDK_OFFSET(0x17993D70)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_FULLNAME_1_OFFSET UNITYSDK_OFFSET(0x17993DD0)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x17993D80)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_ISFULLYTRUSTED_OFFSET UNITYSDK_OFFSET(0x17995210)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_LOCATION_1_OFFSET UNITYSDK_OFFSET(0x17993E30)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x17993D90)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_REFLECTIONONLY_OFFSET UNITYSDK_OFFSET(0x179950F0)
#define SYSTEM_REFLECTION_ASSEMBLY_INTERNALGETASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x17994640)
#define SYSTEM_REFLECTION_ASSEMBLY_INTERNALGETSATELLITEASSEMBLY_OFFSET UNITYSDK_OFFSET(0x17994740)
#define SYSTEM_REFLECTION_ASSEMBLY_INTERNALGETTYPE_OFFSET UNITYSDK_OFFSET(0x17994630)
#define SYSTEM_REFLECTION_ASSEMBLY_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x17993EA0)
#define SYSTEM_REFLECTION_ASSEMBLY_LOADFROM_1_OFFSET UNITYSDK_OFFSET(0x17994C30)
#define SYSTEM_REFLECTION_ASSEMBLY_LOADFROM_2_OFFSET UNITYSDK_OFFSET(0x17994C50)
#define SYSTEM_REFLECTION_ASSEMBLY_LOADFROM_OFFSET UNITYSDK_OFFSET(0x17994C40)
#define SYSTEM_REFLECTION_ASSEMBLY_LOADWITHPARTIALNAME_1_OFFSET UNITYSDK_OFFSET(0x17994E60)
#define SYSTEM_REFLECTION_ASSEMBLY_LOADWITHPARTIALNAME_OFFSET UNITYSDK_OFFSET(0x17994DF0)
#define SYSTEM_REFLECTION_ASSEMBLY_LOAD_1_OFFSET UNITYSDK_OFFSET(0x17994CF0)
#define SYSTEM_REFLECTION_ASSEMBLY_LOAD_OFFSET UNITYSDK_OFFSET(0x17994C70)
#define SYSTEM_REFLECTION_ASSEMBLY_LOAD_WITH_PARTIAL_NAME_OFFSET UNITYSDK_OFFSET(0x17994DE0)
#define SYSTEM_REFLECTION_ASSEMBLY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x17995310)
#define SYSTEM_REFLECTION_ASSEMBLY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x17994260)
#define SYSTEM_REFLECTION_ASSEMBLY_REFLECTIONONLYLOAD_OFFSET UNITYSDK_OFFSET(0x17994D60)
#define SYSTEM_REFLECTION_ASSEMBLY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17993E00)
#define SYSTEM_REFLECTION_ASSEMBLY_UNSAFELOADFROM_OFFSET UNITYSDK_OFFSET(0x17994C60)
#define SYSTEM_REFLECTION_ASSEMBLY__CTOR_OFFSET UNITYSDK_OFFSET(0x17993D20)

namespace System::Reflection
{
	inline static constexpr unsigned int Assembly_TypeDefinitionIndex = 592;

	class Assembly : public ::System::Object
	{
	public:
		::System::IntPtr _mono_assembly; // 0x10
		::System::Reflection::Assembly_ResolveEventHolder* resolve_event_holder; // 0x18
		::System::Object* _evidence; // 0x20
		::System::Object* _minimum; // 0x28
		::System::Object* _optional; // 0x30
		::System::Object* _refuse; // 0x38
		::System::Object* _granted; // 0x40
		::System::Object* _denied; // 0x48
		::System::Boolean fromByteArray; // 0x50
		::System::String* assemblyName; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY__CTOR_OFFSET))(this);
		}

		::System::String* get_code_base(::System::Boolean escaped)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GET_CODE_BASE_OFFSET))(this, escaped);
		}

		::System::String* get_fullname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GET_FULLNAME_OFFSET))(this);
		}

		::System::String* get_location()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GET_LOCATION_OFFSET))(this);
		}

		static ::System::String* GetAotId()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETAOTID_OFFSET))();
		}

		::System::String* GetCodeBase(::System::Boolean escaped)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETCODEBASE_OFFSET))(this, escaped);
		}

		::System::String* get_CodeBase()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GET_CODEBASE_OFFSET))(this);
		}

		::System::String* get_FullName_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GET_FULLNAME_1_OFFSET))(this);
		}

		::System::String* get_Location_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GET_LOCATION_1_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Boolean IsDefined(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_ISDEFINED_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETCUSTOMATTRIBUTES_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETCUSTOMATTRIBUTES_1_OFFSET))(this, attributeType, inherit);
		}

		::System::IntPtr GetManifestResourceInternal(::System::String* name, ::System::Int32& size, ::System::Reflection::Module*& module)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::String*, ::System::Int32&, ::System::Reflection::Module*&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCEINTERNAL_OFFSET))(this, name, size, module);
		}

		::System::IO::Stream* GetManifestResourceStream(::System::String* name)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCESTREAM_OFFSET))(this, name);
		}

		::System::IO::Stream* GetManifestResourceStream_1(::System::Type* type, ::System::String* name, ::System::Boolean skipSecurityCheck, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCESTREAM_1_OFFSET))(this, type, name, skipSecurityCheck, stackMark);
		}

		::System::IO::Stream* GetManifestResourceStream_2(::System::String* name, ::System::Threading::StackCrawlMark& stackMark, ::System::Boolean skipSecurityCheck)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::String*, ::System::Threading::StackCrawlMark&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCESTREAM_2_OFFSET))(this, name, stackMark, skipSecurityCheck);
		}

		::System::String* GetSimpleName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETSIMPLENAME_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetPublicKey()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETPUBLICKEY_OFFSET))(this);
		}

		::System::Version* GetVersion()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETVERSION_OFFSET))(this);
		}

		::System::Reflection::AssemblyNameFlags GetFlags()
		{
			return ((::System::Reflection::AssemblyNameFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETFLAGS_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* GetTypes(::System::Boolean exportedOnly)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETTYPES_OFFSET))(this, exportedOnly);
		}

		::Il2CppArray<::System::Type*>* GetTypes_1()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETTYPES_1_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* GetExportedTypes()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETEXPORTEDTYPES_OFFSET))(this);
		}

		::System::Type* GetType(::System::String* name, ::System::Boolean throwOnError)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETTYPE_OFFSET))(this, name, throwOnError);
		}

		::System::Type* GetType_1(::System::String* name)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETTYPE_1_OFFSET))(this, name);
		}

		::System::Type* InternalGetType(::System::Reflection::Module* module, ::System::String* name, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::Module*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_INTERNALGETTYPE_OFFSET))(this, module, name, throwOnError, ignoreCase);
		}

		static ::System::Void InternalGetAssemblyName(::System::String* assemblyFile, ::Mono::MonoAssemblyName& aname, ::System::String*& codebase)
		{
			return ((::System::Void(*)(::System::String*, ::Mono::MonoAssemblyName&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_INTERNALGETASSEMBLYNAME_OFFSET))(assemblyFile, aname, codebase);
		}

		::System::Reflection::AssemblyName* GetName(::System::Boolean copiedName)
		{
			return ((::System::Reflection::AssemblyName*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETNAME_OFFSET))(this, copiedName);
		}

		::System::Reflection::AssemblyName* GetName_1()
		{
			return ((::System::Reflection::AssemblyName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETNAME_1_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_TOSTRING_OFFSET))(this);
		}

		static ::System::Reflection::Assembly* GetAssembly(::System::Type* type)
		{
			return ((::System::Reflection::Assembly*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETASSEMBLY_OFFSET))(type);
		}

		::System::Reflection::RuntimeAssembly* InternalGetSatelliteAssembly(::System::String* name, ::System::Globalization::CultureInfo* culture, ::System::Version* version, ::System::Boolean throwOnFileNotFound, ::System::Threading::StackCrawlMark& stackMark)
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::PVOID, ::System::String*, ::System::Globalization::CultureInfo*, ::System::Version*, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_INTERNALGETSATELLITEASSEMBLY_OFFSET))(this, name, culture, version, throwOnFileNotFound, stackMark);
		}

		static ::System::Reflection::Assembly* LoadFrom(::System::String* assemblyFile, ::System::Boolean refonly)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOADFROM_OFFSET))(assemblyFile, refonly);
		}

		static ::System::Reflection::Assembly* LoadFrom_1(::System::String* assemblyFile)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOADFROM_1_OFFSET))(assemblyFile);
		}

		static ::System::Reflection::Assembly* LoadFrom_2(::System::String* assemblyFile, ::System::Security::Policy::Evidence* securityEvidence)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*, ::System::Security::Policy::Evidence*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOADFROM_2_OFFSET))(assemblyFile, securityEvidence);
		}

		static ::System::Reflection::Assembly* UnsafeLoadFrom(::System::String* assemblyFile)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_UNSAFELOADFROM_OFFSET))(assemblyFile);
		}

		static ::System::Reflection::Assembly* Load(::System::String* assemblyString)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOAD_OFFSET))(assemblyString);
		}

		static ::System::Reflection::Assembly* Load_1(::System::Reflection::AssemblyName* assemblyRef)
		{
			return ((::System::Reflection::Assembly*(*)(::System::Reflection::AssemblyName*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOAD_1_OFFSET))(assemblyRef);
		}

		static ::System::Reflection::Assembly* ReflectionOnlyLoad(::System::String* assemblyString)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_REFLECTIONONLYLOAD_OFFSET))(assemblyString);
		}

		static ::System::Reflection::Assembly* load_with_partial_name(::System::String* name, ::System::Security::Policy::Evidence* e)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*, ::System::Security::Policy::Evidence*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOAD_WITH_PARTIAL_NAME_OFFSET))(name, e);
		}

		static ::System::Reflection::Assembly* LoadWithPartialName(::System::String* partialName, ::System::Security::Policy::Evidence* securityEvidence)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*, ::System::Security::Policy::Evidence*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOADWITHPARTIALNAME_OFFSET))(partialName, securityEvidence);
		}

		static ::System::Reflection::Assembly* LoadWithPartialName_1(::System::String* partialName, ::System::Security::Policy::Evidence* securityEvidence, ::System::Boolean oldBehavior)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*, ::System::Security::Policy::Evidence*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOADWITHPARTIALNAME_1_OFFSET))(partialName, securityEvidence, oldBehavior);
		}

		::Il2CppArray<::System::Reflection::Module*>* GetModulesInternal()
		{
			return ((::Il2CppArray<::System::Reflection::Module*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMODULESINTERNAL_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* GetManifestResourceNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCENAMES_OFFSET))(this);
		}

		static ::System::Reflection::Assembly* GetExecutingAssembly()
		{
			return ((::System::Reflection::Assembly*(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETEXECUTINGASSEMBLY_OFFSET))();
		}

		static ::System::Reflection::Assembly* GetCallingAssembly()
		{
			return ((::System::Reflection::Assembly*(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETCALLINGASSEMBLY_OFFSET))();
		}

		::System::Boolean GetManifestResourceInfoInternal(::System::String* name, ::System::Reflection::ManifestResourceInfo* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Reflection::ManifestResourceInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCEINFOINTERNAL_OFFSET))(this, name, info);
		}

		::System::Reflection::ManifestResourceInfo* GetManifestResourceInfo(::System::String* resourceName)
		{
			return ((::System::Reflection::ManifestResourceInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCEINFO_OFFSET))(this, resourceName);
		}

		::System::Boolean get_ReflectionOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GET_REFLECTIONONLY_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_EQUALS_OFFSET))(this, o);
		}

		static ::System::Exception* CreateNIE()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_CREATENIE_OFFSET))();
		}

		::System::Boolean get_IsFullyTrusted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GET_ISFULLYTRUSTED_OFFSET))(this);
		}

		::System::Type* GetType_2(::System::String* name, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETTYPE_2_OFFSET))(this, name, throwOnError, ignoreCase);
		}

		::System::Reflection::Module* GetModule(::System::String* name)
		{
			return ((::System::Reflection::Module*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMODULE_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::Module*>* GetModules(::System::Boolean getResourceModules)
		{
			return ((::Il2CppArray<::System::Reflection::Module*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMODULES_OFFSET))(this, getResourceModules);
		}

		static ::System::Boolean op_Equality(::System::Reflection::Assembly* left, ::System::Reflection::Assembly* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::Reflection::Assembly* left, ::System::Reflection::Assembly* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}
