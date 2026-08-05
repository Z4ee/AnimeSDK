#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5CFCC37B3A5F59B3.h"
#include "unitysdk/Struct_2_97F90E6FB4F6D559.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_LinkInfo.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_Offset.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_StyleParseState.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_APPLYTAGTOSTYLESTATE_OFFSET UNITYSDK_OFFSET(0x1E82E3A0)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_CONVERTTOFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1E830E40)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_CONVERTTOFLOAT_OFFSET UNITYSDK_OFFSET(0x1E830F40)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_GETATTRIBUTEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E8309A0)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_HEXCHARSTOCOLOR_OFFSET UNITYSDK_OFFSET(0x1E830250)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_HEXTOINT_OFFSET UNITYSDK_OFFSET(0x1E830EE0)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_ISHEXCHAR_OFFSET UNITYSDK_OFFSET(0x1E8301F0)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_PARSEMARKATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1E82EE90)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_PARSEMARKATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1E82F970)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_PARSESIZEVALUE_1_OFFSET UNITYSDK_OFFSET(0x1E82F700)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_PARSESIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1E830C40)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_TRYREADATTRIBUTESTRING_OFFSET UNITYSDK_OFFSET(0x1E82EC80)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_TRYREADATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E830B80)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_TRYREADSELFATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E830AD0)
#define UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E831160)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int RichTagParseUtils_TypeDefinitionIndex = 71532;

	class RichTagParseUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Single>** StaticGet_s_attributeParams()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RichTagParseUtils_TypeDefinitionIndex)->GetStaticField(0x51300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void ApplyTagToStyleState(::Struct_2_97F90E6FB4F6D559 tagInfo, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_5CFCC37B3A5F59B3>* tagAttributes, ::System::String* preprocessedText, ::System::String* txt, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_LinkInfo>* links, ::UnityEngine::UI::Extension::NAP_StyleParseState& s, ::System::Int32 currentGi)
		{
			return ((::System::Void(*)(::Struct_2_97F90E6FB4F6D559, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_5CFCC37B3A5F59B3>*, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_LinkInfo>*, ::UnityEngine::UI::Extension::NAP_StyleParseState&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_APPLYTAGTOSTYLESTATE_OFFSET))(tagInfo, tagAttributes, preprocessedText, txt, links, s, currentGi);
		}

		static ::System::Void ParseMarkAttributes(::System::String* src, ::System::Int32 start, ::System::Int32 length, ::System::Single fontSize, ::UnityEngine::Color32& color, ::UnityEngine::UI::Extension::NAP_Offset& padding)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Single, ::UnityEngine::Color32&, ::UnityEngine::UI::Extension::NAP_Offset&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_PARSEMARKATTRIBUTES_OFFSET))(src, start, length, fontSize, color, padding);
		}

		static ::System::Void ParseMarkAttributes_1(::System::String* src, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_5CFCC37B3A5F59B3>* attributes, ::Struct_2_97F90E6FB4F6D559 tagInfo, ::System::Single fontSize, ::UnityEngine::Color32& color, ::UnityEngine::UI::Extension::NAP_Offset& padding)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_5CFCC37B3A5F59B3>*, ::Struct_2_97F90E6FB4F6D559, ::System::Single, ::UnityEngine::Color32&, ::UnityEngine::UI::Extension::NAP_Offset&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_PARSEMARKATTRIBUTES_1_OFFSET))(src, attributes, tagInfo, fontSize, color, padding);
		}

		static ::System::Single ParseSizeValue(::System::String* src, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::Single(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_PARSESIZEVALUE_OFFSET))(src, start, length);
		}

		static ::System::Single ParseSizeValue_1(::System::String* src, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_5CFCC37B3A5F59B3>* attributes, ::Struct_2_97F90E6FB4F6D559 tagInfo)
		{
			return ((::System::Single(*)(::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_5CFCC37B3A5F59B3>*, ::Struct_2_97F90E6FB4F6D559))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_PARSESIZEVALUE_1_OFFSET))(src, attributes, tagInfo);
		}

		static ::System::Boolean TryReadSelfAttribute(::System::String* src, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_5CFCC37B3A5F59B3>* attributes, ::Struct_2_97F90E6FB4F6D559 tagInfo, ::Struct_2_5CFCC37B3A5F59B3& attribute)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_5CFCC37B3A5F59B3>*, ::Struct_2_97F90E6FB4F6D559, ::Struct_2_5CFCC37B3A5F59B3&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_TRYREADSELFATTRIBUTE_OFFSET))(src, attributes, tagInfo, attribute);
		}

		static ::System::Boolean TryReadAttribute(::System::String* src, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_5CFCC37B3A5F59B3>* attributes, ::Struct_2_97F90E6FB4F6D559 tagInfo, ::System::String* name, ::Struct_2_5CFCC37B3A5F59B3& attribute)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_5CFCC37B3A5F59B3>*, ::Struct_2_97F90E6FB4F6D559, ::System::String*, ::Struct_2_5CFCC37B3A5F59B3&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_TRYREADATTRIBUTE_OFFSET))(src, attributes, tagInfo, name, attribute);
		}

		static ::System::Boolean TryReadAttributeString(::System::String* src, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_5CFCC37B3A5F59B3>* attributes, ::Struct_2_97F90E6FB4F6D559 tagInfo, ::System::String* name, ::System::String*& value)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_5CFCC37B3A5F59B3>*, ::Struct_2_97F90E6FB4F6D559, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_TRYREADATTRIBUTESTRING_OFFSET))(src, attributes, tagInfo, name, value);
		}

		static ::System::Int32 HexToInt(::System::Char hex)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_HEXTOINT_OFFSET))(hex);
		}

		static ::UnityEngine::Color32 HexCharsToColor(::System::String* src, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::UnityEngine::Color32(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_HEXCHARSTOCOLOR_OFFSET))(src, startIndex, length);
		}

		static ::System::Single ConvertToFloat(::System::String* src, ::System::Int32 startIndex, ::System::Int32 length, ::System::Int32& lastIndex)
		{
			return ((::System::Single(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_CONVERTTOFLOAT_OFFSET))(src, startIndex, length, lastIndex);
		}

		static ::System::Single ConvertToFloat_1(::System::String* src, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::Single(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_CONVERTTOFLOAT_1_OFFSET))(src, startIndex, length);
		}

		static ::System::Int32 GetAttributeParameters(::System::String* src, ::System::Int32 startIndex, ::System::Int32 length, ::Il2CppArray<::System::Single>*& parameters)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_GETATTRIBUTEPARAMETERS_OFFSET))(src, startIndex, length, parameters);
		}

		static ::System::Boolean IsHexChar(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RICHTAGPARSEUTILS_ISHEXCHAR_OFFSET))(c);
		}
	};
}
