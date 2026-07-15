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

#define SYSTEM_REFLECTION_ASSEMBLY_CREATENIE_OFFSET UNITYSDK_OFFSET(0x1AFC3990)
#define SYSTEM_REFLECTION_ASSEMBLY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AFC3920)
#define SYSTEM_REFLECTION_ASSEMBLY_GETAOTID_OFFSET UNITYSDK_OFFSET(0x1AFC1A20)
#define SYSTEM_REFLECTION_ASSEMBLY_GETASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1AFC2BD0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETCALLINGASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1AFC37E0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETCODEBASE_OFFSET UNITYSDK_OFFSET(0x1AFC1A30)
#define SYSTEM_REFLECTION_ASSEMBLY_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1AFC1B40)
#define SYSTEM_REFLECTION_ASSEMBLY_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1AFC1B30)
#define SYSTEM_REFLECTION_ASSEMBLY_GETEXECUTINGASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1AFC3790)
#define SYSTEM_REFLECTION_ASSEMBLY_GETEXPORTEDTYPES_OFFSET UNITYSDK_OFFSET(0x1AFC2930)
#define SYSTEM_REFLECTION_ASSEMBLY_GETFLAGS_OFFSET UNITYSDK_OFFSET(0x1AFC27F0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AFC3910)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCEINFOINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AFC3800)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCEINFO_OFFSET UNITYSDK_OFFSET(0x1AFC3810)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AFC1B50)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCENAMES_OFFSET UNITYSDK_OFFSET(0x1AFC3780)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCESTREAM_1_OFFSET UNITYSDK_OFFSET(0x1AFC2380)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCESTREAM_2_OFFSET UNITYSDK_OFFSET(0x1AFC2620)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCESTREAM_OFFSET UNITYSDK_OFFSET(0x1AFC1B60)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMODULESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AFC3710)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMODULES_OFFSET UNITYSDK_OFFSET(0x1AFC3AE0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETMODULE_OFFSET UNITYSDK_OFFSET(0x1AFC3A90)
#define SYSTEM_REFLECTION_ASSEMBLY_GETNAME_1_OFFSET UNITYSDK_OFFSET(0x1AFC2B50)
#define SYSTEM_REFLECTION_ASSEMBLY_GETNAME_OFFSET UNITYSDK_OFFSET(0x1AFC2B00)
#define SYSTEM_REFLECTION_ASSEMBLY_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1AFC1AD0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETPUBLICKEY_OFFSET UNITYSDK_OFFSET(0x1AFC26D0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETSIMPLENAME_OFFSET UNITYSDK_OFFSET(0x1AFC2640)
#define SYSTEM_REFLECTION_ASSEMBLY_GETTYPES_1_OFFSET UNITYSDK_OFFSET(0x1AFC28B0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETTYPES_OFFSET UNITYSDK_OFFSET(0x1AFC2880)
#define SYSTEM_REFLECTION_ASSEMBLY_GETTYPE_1_OFFSET UNITYSDK_OFFSET(0x1AFC2A50)
#define SYSTEM_REFLECTION_ASSEMBLY_GETTYPE_2_OFFSET UNITYSDK_OFFSET(0x1AFC3A40)
#define SYSTEM_REFLECTION_ASSEMBLY_GETTYPE_OFFSET UNITYSDK_OFFSET(0x1AFC29B0)
#define SYSTEM_REFLECTION_ASSEMBLY_GETVERSION_OFFSET UNITYSDK_OFFSET(0x1AFC2760)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_CODEBASE_OFFSET UNITYSDK_OFFSET(0x1AFC1A40)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_CODE_BASE_OFFSET UNITYSDK_OFFSET(0x1AFC19F0)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_FULLNAME_1_OFFSET UNITYSDK_OFFSET(0x1AFC1A50)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x1AFC1A00)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_ISFULLYTRUSTED_OFFSET UNITYSDK_OFFSET(0x1AFC3A30)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_LOCATION_1_OFFSET UNITYSDK_OFFSET(0x1AFC1AB0)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x1AFC1A10)
#define SYSTEM_REFLECTION_ASSEMBLY_GET_REFLECTIONONLY_OFFSET UNITYSDK_OFFSET(0x1AFC3900)
#define SYSTEM_REFLECTION_ASSEMBLY_INTERNALGETASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x1AFC2AF0)
#define SYSTEM_REFLECTION_ASSEMBLY_INTERNALGETSATELLITEASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1AFC2CB0)
#define SYSTEM_REFLECTION_ASSEMBLY_INTERNALGETTYPE_OFFSET UNITYSDK_OFFSET(0x1AFC2AE0)
#define SYSTEM_REFLECTION_ASSEMBLY_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1AFC1B20)
#define SYSTEM_REFLECTION_ASSEMBLY_LOADFROM_1_OFFSET UNITYSDK_OFFSET(0x1AFC3440)
#define SYSTEM_REFLECTION_ASSEMBLY_LOADFROM_2_OFFSET UNITYSDK_OFFSET(0x1AFC3460)
#define SYSTEM_REFLECTION_ASSEMBLY_LOADFROM_OFFSET UNITYSDK_OFFSET(0x1AFC3450)
#define SYSTEM_REFLECTION_ASSEMBLY_LOADWITHPARTIALNAME_1_OFFSET UNITYSDK_OFFSET(0x1AFC3670)
#define SYSTEM_REFLECTION_ASSEMBLY_LOADWITHPARTIALNAME_OFFSET UNITYSDK_OFFSET(0x1AFC3600)
#define SYSTEM_REFLECTION_ASSEMBLY_LOAD_1_OFFSET UNITYSDK_OFFSET(0x1AFC3500)
#define SYSTEM_REFLECTION_ASSEMBLY_LOAD_OFFSET UNITYSDK_OFFSET(0x1AFC3480)
#define SYSTEM_REFLECTION_ASSEMBLY_LOAD_WITH_PARTIAL_NAME_OFFSET UNITYSDK_OFFSET(0x1AFC35F0)
#define SYSTEM_REFLECTION_ASSEMBLY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AFC3B30)
#define SYSTEM_REFLECTION_ASSEMBLY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1AFC22A0)
#define SYSTEM_REFLECTION_ASSEMBLY_REFLECTIONONLYLOAD_OFFSET UNITYSDK_OFFSET(0x1AFC3570)
#define SYSTEM_REFLECTION_ASSEMBLY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AFC1A80)
#define SYSTEM_REFLECTION_ASSEMBLY_UNSAFELOADFROM_OFFSET UNITYSDK_OFFSET(0x1AFC3470)
#define SYSTEM_REFLECTION_ASSEMBLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC19A0)

namespace System::Reflection
{
	inline static constexpr unsigned int Assembly_TypeDefinitionIndex = 591;

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

		::System::String* get_code_base(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GET_CODE_BASE_OFFSET))(this, a1);
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

		::System::String* GetCodeBase(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETCODEBASE_OFFSET))(this, a1);
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

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsDefined(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_ISDEFINED_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETCUSTOMATTRIBUTES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETCUSTOMATTRIBUTES_1_OFFSET))(this, a1, a2);
		}

		::System::IntPtr GetManifestResourceInternal(::System::String* a1, ::System::Int32& a2, ::System::Reflection::Module*& a3)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::String*, ::System::Int32&, ::System::Reflection::Module*&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCEINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::IO::Stream* GetManifestResourceStream(::System::String* a1)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCESTREAM_OFFSET))(this, a1);
		}

		::System::IO::Stream* GetManifestResourceStream_1(::System::Type* a1, ::System::String* a2, ::System::Boolean a3, ::System::Threading::StackCrawlMark& a4)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCESTREAM_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IO::Stream* GetManifestResourceStream_2(::System::String* a1, ::System::Threading::StackCrawlMark& a2, ::System::Boolean a3)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::String*, ::System::Threading::StackCrawlMark&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCESTREAM_2_OFFSET))(this, a1, a2, a3);
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

		::Il2CppArray<::System::Type*>* GetTypes(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETTYPES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Type*>* GetTypes_1()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETTYPES_1_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* GetExportedTypes()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETEXPORTEDTYPES_OFFSET))(this);
		}

		::System::Type* GetType(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETTYPE_OFFSET))(this, a1, a2);
		}

		::System::Type* GetType_1(::System::String* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETTYPE_1_OFFSET))(this, a1);
		}

		::System::Type* InternalGetType(::System::Reflection::Module* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::Module*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_INTERNALGETTYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void InternalGetAssemblyName(::System::String* a1, ::Mono::MonoAssemblyName& a2, ::System::String*& a3)
		{
			return ((::System::Void(*)(::System::String*, ::Mono::MonoAssemblyName&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_INTERNALGETASSEMBLYNAME_OFFSET))(a1, a2, a3);
		}

		::System::Reflection::AssemblyName* GetName(::System::Boolean a1)
		{
			return ((::System::Reflection::AssemblyName*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETNAME_OFFSET))(this, a1);
		}

		::System::Reflection::AssemblyName* GetName_1()
		{
			return ((::System::Reflection::AssemblyName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETNAME_1_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_TOSTRING_OFFSET))(this);
		}

		static ::System::Reflection::Assembly* GetAssembly(::System::Type* a1)
		{
			return ((::System::Reflection::Assembly*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETASSEMBLY_OFFSET))(a1);
		}

		::System::Reflection::RuntimeAssembly* InternalGetSatelliteAssembly(::System::String* a1, ::System::Globalization::CultureInfo* a2, ::System::Version* a3, ::System::Boolean a4, ::System::Threading::StackCrawlMark& a5)
		{
			return ((::System::Reflection::RuntimeAssembly*(*)(::PVOID, ::System::String*, ::System::Globalization::CultureInfo*, ::System::Version*, ::System::Boolean, ::System::Threading::StackCrawlMark&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_INTERNALGETSATELLITEASSEMBLY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Reflection::Assembly* LoadFrom(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOADFROM_OFFSET))(a1, a2);
		}

		static ::System::Reflection::Assembly* LoadFrom_1(::System::String* a1)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOADFROM_1_OFFSET))(a1);
		}

		static ::System::Reflection::Assembly* LoadFrom_2(::System::String* a1, ::System::Security::Policy::Evidence* a2)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*, ::System::Security::Policy::Evidence*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOADFROM_2_OFFSET))(a1, a2);
		}

		static ::System::Reflection::Assembly* UnsafeLoadFrom(::System::String* a1)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_UNSAFELOADFROM_OFFSET))(a1);
		}

		static ::System::Reflection::Assembly* Load(::System::String* a1)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOAD_OFFSET))(a1);
		}

		static ::System::Reflection::Assembly* Load_1(::System::Reflection::AssemblyName* a1)
		{
			return ((::System::Reflection::Assembly*(*)(::System::Reflection::AssemblyName*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOAD_1_OFFSET))(a1);
		}

		static ::System::Reflection::Assembly* ReflectionOnlyLoad(::System::String* a1)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_REFLECTIONONLYLOAD_OFFSET))(a1);
		}

		static ::System::Reflection::Assembly* load_with_partial_name(::System::String* a1, ::System::Security::Policy::Evidence* a2)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*, ::System::Security::Policy::Evidence*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOAD_WITH_PARTIAL_NAME_OFFSET))(a1, a2);
		}

		static ::System::Reflection::Assembly* LoadWithPartialName(::System::String* a1, ::System::Security::Policy::Evidence* a2)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*, ::System::Security::Policy::Evidence*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOADWITHPARTIALNAME_OFFSET))(a1, a2);
		}

		static ::System::Reflection::Assembly* LoadWithPartialName_1(::System::String* a1, ::System::Security::Policy::Evidence* a2, ::System::Boolean a3)
		{
			return ((::System::Reflection::Assembly*(*)(::System::String*, ::System::Security::Policy::Evidence*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_LOADWITHPARTIALNAME_1_OFFSET))(a1, a2, a3);
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

		::System::Boolean GetManifestResourceInfoInternal(::System::String* a1, ::System::Reflection::ManifestResourceInfo* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Reflection::ManifestResourceInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCEINFOINTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Reflection::ManifestResourceInfo* GetManifestResourceInfo(::System::String* a1)
		{
			return ((::System::Reflection::ManifestResourceInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMANIFESTRESOURCEINFO_OFFSET))(this, a1);
		}

		::System::Boolean get_ReflectionOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GET_REFLECTIONONLY_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_EQUALS_OFFSET))(this, a1);
		}

		static ::System::Exception* CreateNIE()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_CREATENIE_OFFSET))();
		}

		::System::Boolean get_IsFullyTrusted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GET_ISFULLYTRUSTED_OFFSET))(this);
		}

		::System::Type* GetType_2(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETTYPE_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Reflection::Module* GetModule(::System::String* a1)
		{
			return ((::System::Reflection::Module*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMODULE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Reflection::Module*>* GetModules(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Reflection::Module*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_GETMODULES_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::System::Reflection::Assembly* a1, ::System::Reflection::Assembly* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::Reflection::Assembly* a1, ::System::Reflection::Assembly* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_OP_INEQUALITY_OFFSET))(a1, a2);
		}
	};
}
