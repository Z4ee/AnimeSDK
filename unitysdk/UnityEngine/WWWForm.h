#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class Encoding; }

#define UNITYENGINE_WWWFORM_ADDBINARYDATA_1_OFFSET UNITYSDK_OFFSET(0x1EF6CD30)
#define UNITYENGINE_WWWFORM_ADDBINARYDATA_OFFSET UNITYSDK_OFFSET(0x1EF6CD10)
#define UNITYENGINE_WWWFORM_ADDFIELD_1_OFFSET UNITYSDK_OFFSET(0x1EF6C9F0)
#define UNITYENGINE_WWWFORM_ADDFIELD_OFFSET UNITYSDK_OFFSET(0x1EF6C9C0)
#define UNITYENGINE_WWWFORM_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1EF69190)
#define UNITYENGINE_WWWFORM_GET_DEFAULTENCODING_OFFSET UNITYSDK_OFFSET(0x1EF6C690)
#define UNITYENGINE_WWWFORM_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1EF6B560)
#define UNITYENGINE_WWWFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF6C8A0)

namespace UnityEngine
{
	inline static constexpr unsigned int WWWForm_TypeDefinitionIndex = 5344;

	class WWWForm : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Byte>*>* formData; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* fieldNames; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* fileNames; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* types; // 0x28
		::Il2CppArray<::System::Byte>* boundary; // 0x30
		::System::Boolean containsFiles; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWFORM__CTOR_OFFSET))(this);
		}

		static ::System::Text::Encoding* get_DefaultEncoding()
		{
			return ((::System::Text::Encoding*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_WWWFORM_GET_DEFAULTENCODING_OFFSET))();
		}

		::System::Void AddField(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWFORM_ADDFIELD_OFFSET))(this, a1, a2);
		}

		::System::Void AddField_1(::System::String* a1, ::System::String* a2, ::System::Text::Encoding* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWFORM_ADDFIELD_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddBinaryData(::System::String* a1, ::Il2CppArray<::System::Byte>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWFORM_ADDBINARYDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddBinaryData_1(::System::String* a1, ::Il2CppArray<::System::Byte>* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWFORM_ADDBINARYDATA_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* get_headers()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWFORM_GET_HEADERS_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_data()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWFORM_GET_DATA_OFFSET))(this);
		}
	};
}
