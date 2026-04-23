#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class MethodBase; }

#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_CODEXMLNAMESPACEFORCLRTYPENAMESPACE_OFFSET UNITYSDK_OFFSET(0x179E7440)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_ENCODENS_OFFSET UNITYSDK_OFFSET(0x179F3700)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETASSEMBLYNAME_OFFSET UNITYSDK_OFFSET(0x179F37B0)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETNAMEKEY_OFFSET UNITYSDK_OFFSET(0x179F3790)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLELEMENTFORINTEROPTYPE_OFFSET UNITYSDK_OFFSET(0x179F3900)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLNAMESPACEFORMETHODCALL_OFFSET UNITYSDK_OFFSET(0x179E70D0)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLNAMESPACEFORMETHODRESPONSE_OFFSET UNITYSDK_OFFSET(0x179E7040)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLTYPEFORINTEROPTYPE_OFFSET UNITYSDK_OFFSET(0x179F39B0)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GET_XMLNSFORCLRTYPEWITHASSEMBLY_OFFSET UNITYSDK_OFFSET(0x179F3640)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GET_XMLNSFORCLRTYPEWITHNSANDASSEMBLY_OFFSET UNITYSDK_OFFSET(0x179F36C0)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GET_XMLNSFORCLRTYPEWITHNS_OFFSET UNITYSDK_OFFSET(0x179F3680)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_PRELOAD_1_OFFSET UNITYSDK_OFFSET(0x179F3B30)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_PRELOAD_OFFSET UNITYSDK_OFFSET(0x179F3A60)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_REGISTERINTEROPXMLELEMENT_OFFSET UNITYSDK_OFFSET(0x179F4320)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_REGISTERINTEROPXMLTYPE_OFFSET UNITYSDK_OFFSET(0x179F4180)
#define SYSTEM_RUNTIME_REMOTING_SOAPSERVICES__CCTOR_OFFSET UNITYSDK_OFFSET(0x179F44D0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int SoapServices_TypeDefinitionIndex = 1217;

	class SoapServices : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet__typeInfos()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(SoapServices_TypeDefinitionIndex)->GetStaticField(0xC280);
		}
		static ::System::Collections::Hashtable** StaticGet__xmlElements()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(SoapServices_TypeDefinitionIndex)->GetStaticField(0xC288);
		}
		static ::System::Collections::Hashtable** StaticGet__xmlTypes()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(SoapServices_TypeDefinitionIndex)->GetStaticField(0xC290);
		}
		static ::System::Collections::Hashtable** StaticGet__soapActionsMethods()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(SoapServices_TypeDefinitionIndex)->GetStaticField(0xC298);
		}
		static ::System::Collections::Hashtable** StaticGet__soapActions()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(SoapServices_TypeDefinitionIndex)->GetStaticField(0xC2A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES__CCTOR_OFFSET))();
		}

		static ::System::String* get_XmlNsForClrTypeWithAssembly()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GET_XMLNSFORCLRTYPEWITHASSEMBLY_OFFSET))();
		}

		static ::System::String* get_XmlNsForClrTypeWithNs()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GET_XMLNSFORCLRTYPEWITHNS_OFFSET))();
		}

		static ::System::String* get_XmlNsForClrTypeWithNsAndAssembly()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GET_XMLNSFORCLRTYPEWITHNSANDASSEMBLY_OFFSET))();
		}

		static ::System::String* CodeXmlNamespaceForClrTypeNamespace(::System::String* typeNamespace, ::System::String* assemblyName)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_CODEXMLNAMESPACEFORCLRTYPENAMESPACE_OFFSET))(typeNamespace, assemblyName);
		}

		static ::System::String* GetNameKey(::System::String* name, ::System::String* namspace)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETNAMEKEY_OFFSET))(name, namspace);
		}

		static ::System::String* GetAssemblyName(::System::Reflection::MethodBase* mb)
		{
			return ((::System::String*(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETASSEMBLYNAME_OFFSET))(mb);
		}

		static ::System::Boolean GetXmlElementForInteropType(::System::Type* type, ::System::String*& xmlElement, ::System::String*& xmlNamespace)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLELEMENTFORINTEROPTYPE_OFFSET))(type, xmlElement, xmlNamespace);
		}

		static ::System::String* GetXmlNamespaceForMethodCall(::System::Reflection::MethodBase* mb)
		{
			return ((::System::String*(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLNAMESPACEFORMETHODCALL_OFFSET))(mb);
		}

		static ::System::String* GetXmlNamespaceForMethodResponse(::System::Reflection::MethodBase* mb)
		{
			return ((::System::String*(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLNAMESPACEFORMETHODRESPONSE_OFFSET))(mb);
		}

		static ::System::Boolean GetXmlTypeForInteropType(::System::Type* type, ::System::String*& xmlType, ::System::String*& xmlTypeNamespace)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_GETXMLTYPEFORINTEROPTYPE_OFFSET))(type, xmlType, xmlTypeNamespace);
		}

		static ::System::Void PreLoad(::System::Reflection::Assembly* assembly)
		{
			return ((::System::Void(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_PRELOAD_OFFSET))(assembly);
		}

		static ::System::Void PreLoad_1(::System::Type* type)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_PRELOAD_1_OFFSET))(type);
		}

		static ::System::Void RegisterInteropXmlElement(::System::String* xmlElement, ::System::String* xmlNamespace, ::System::Type* type)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_REGISTERINTEROPXMLELEMENT_OFFSET))(xmlElement, xmlNamespace, type);
		}

		static ::System::Void RegisterInteropXmlType(::System::String* xmlType, ::System::String* xmlTypeNamespace, ::System::Type* type)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_REGISTERINTEROPXMLTYPE_OFFSET))(xmlType, xmlTypeNamespace, type);
		}

		static ::System::String* EncodeNs(::System::String* ns)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SOAPSERVICES_ENCODENS_OFFSET))(ns);
		}
	};
}
