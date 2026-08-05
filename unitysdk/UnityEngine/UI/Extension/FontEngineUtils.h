#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/Extension/FontEngineUtils_FaceInfoCache.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_FaceInfo.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_LineInfo.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Font; }

#define UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_CLEARFACEINFOCACHE_OFFSET UNITYSDK_OFFSET(0x1D340A20)
#define UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_COMPUTECHARASCDESC_OFFSET UNITYSDK_OFFSET(0x1D340F20)
#define UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_COMPUTEINTERNALSIZE_OFFSET UNITYSDK_OFFSET(0x1D341030)
#define UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_COMPUTEPURELINEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D3410A0)
#define UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_GETASCENTLINE_OFFSET UNITYSDK_OFFSET(0x1D340BF0)
#define UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_GETDESCENTLINE_OFFSET UNITYSDK_OFFSET(0x1D340C90)
#define UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_GETFACEINFOCACHE_OFFSET UNITYSDK_OFFSET(0x1D3403B0)
#define UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_GETFACEINFO_OFFSET UNITYSDK_OFFSET(0x1D340B30)
#define UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_GETLINEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D340E70)
#define UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_GETUNDERLINEOFFSET_OFFSET UNITYSDK_OFFSET(0x1D340D30)
#define UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_GETUNDERLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0x1D340DD0)
#define UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_SCALEDASCENT_OFFSET UNITYSDK_OFFSET(0x1D341240)
#define UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D340290)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int FontEngineUtils_TypeDefinitionIndex = 57191;

	class FontEngineUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::Extension::FontEngineUtils_FaceInfoCache>** StaticGet_s_faceInfoCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::Extension::FontEngineUtils_FaceInfoCache>**)Il2CppClass::FromTypeDefinitionIndex(FontEngineUtils_TypeDefinitionIndex)->GetStaticField(0x4CA50);
		}
		// static const ::System::Int32 kSamplingSize = 0x64; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::UI::Extension::FontEngineUtils_FaceInfoCache GetFaceInfoCache(::UnityEngine::Font* f)
		{
			return ((::UnityEngine::UI::Extension::FontEngineUtils_FaceInfoCache(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_GETFACEINFOCACHE_OFFSET))(f);
		}

		static ::System::Void ClearFaceInfoCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_CLEARFACEINFOCACHE_OFFSET))();
		}

		static ::UnityEngine::UI::Extension::NAP_FaceInfo GetFaceInfo(::UnityEngine::Font* f, ::System::Int32 fontSize)
		{
			return ((::UnityEngine::UI::Extension::NAP_FaceInfo(*)(::UnityEngine::Font*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_GETFACEINFO_OFFSET))(f, fontSize);
		}

		static ::System::Single GetAscentLine(::UnityEngine::Font* f, ::System::Int32 fontSize)
		{
			return ((::System::Single(*)(::UnityEngine::Font*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_GETASCENTLINE_OFFSET))(f, fontSize);
		}

		static ::System::Single GetDescentLine(::UnityEngine::Font* f, ::System::Int32 fontSize)
		{
			return ((::System::Single(*)(::UnityEngine::Font*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_GETDESCENTLINE_OFFSET))(f, fontSize);
		}

		static ::System::Single GetUnderlineOffset(::UnityEngine::Font* f, ::System::Int32 fontSize)
		{
			return ((::System::Single(*)(::UnityEngine::Font*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_GETUNDERLINEOFFSET_OFFSET))(f, fontSize);
		}

		static ::System::Single GetUnderlineThickness(::UnityEngine::Font* f, ::System::Int32 fontSize)
		{
			return ((::System::Single(*)(::UnityEngine::Font*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_GETUNDERLINETHICKNESS_OFFSET))(f, fontSize);
		}

		static ::System::Single GetLineHeight(::UnityEngine::Font* f, ::System::Int32 fontSize)
		{
			return ((::System::Single(*)(::UnityEngine::Font*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_GETLINEHEIGHT_OFFSET))(f, fontSize);
		}

		static ::System::Void ComputeCharAscDesc(::UnityEngine::UI::Extension::NAP_FaceInfo& faceInfo, ::System::Single charPointSize, ::System::Single baseFontSize, ::UnityEngine::UI::Extension::NAP_LineInfo& lineInfo, ::System::Single& ascender, ::System::Single& descender)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::NAP_FaceInfo&, ::System::Single, ::System::Single, ::UnityEngine::UI::Extension::NAP_LineInfo&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_COMPUTECHARASCDESC_OFFSET))(faceInfo, charPointSize, baseFontSize, lineInfo, ascender, descender);
		}

		static ::System::Int32 ComputeInternalSize(::UnityEngine::Font* f, ::System::Int32 fontSize, ::System::Single ppu)
		{
			return ((::System::Int32(*)(::UnityEngine::Font*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_COMPUTEINTERNALSIZE_OFFSET))(f, fontSize, ppu);
		}

		static ::System::Int32 ComputePureLineHeight(::UnityEngine::Font* f, ::System::Int32 internalSize)
		{
			return ((::System::Int32(*)(::UnityEngine::Font*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_COMPUTEPURELINEHEIGHT_OFFSET))(f, internalSize);
		}

		static ::System::Single ScaledAscent(::UnityEngine::Font* f, ::System::Int32 internalSize)
		{
			return ((::System::Single(*)(::UnityEngine::Font*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_FONTENGINEUTILS_SCALEDASCENT_OFFSET))(f, internalSize);
		}
	};
}
