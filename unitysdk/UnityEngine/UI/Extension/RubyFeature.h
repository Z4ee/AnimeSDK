#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_965E30DB043094A1.h"
#include "unitysdk/Enum_3_96EDEAC6CE722CBE.h"
#include "unitysdk/Struct_2_5CFCC37B3A5F59B3.h"
#include "unitysdk/Struct_2_97F90E6FB4F6D559.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/TextGenerationSettings.h"
#include "unitysdk/UnityEngine/UI/Extension/BaseTextMeshRange.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_CharacterInfo.h"
#include "unitysdk/UnityEngine/UI/Extension/RubyFeature_RubyAnnotationInfo.h"
#include "unitysdk/UnityEngine/UI/Extension/RubyFeature_RubyAnnotationRuntimeData.h"
#include "unitysdk/UnityEngine/UI/Extension/RubyFeature_RubyMeasureResult.h"
#include "unitysdk/UnityEngine/UI/Extension/RubyFeature_RubyPreferredHeightInput.h"
#include "unitysdk/UnityEngine/UI/Extension/RubyFeature_RubyTagParams.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextFeatureBase.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextRevealQuadRange.h"
#include "unitysdk/UnityEngine/UICharInfo.h"
#include "unitysdk/UnityEngine/UILineInfo.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class TextGenerator; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI::Extension { class IUITextLineExtraHeightWriter; }
namespace UnityEngine::UI::Extension { class IUITextTypesetConstraintWriter; }

#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_ADDRUBYTYPEWRITERREVEALRANGES_OFFSET UNITYSDK_OFFSET(0x18797010)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_ADDTYPEWRITERREVEALRANGE_OFFSET UNITYSDK_OFFSET(0x18797870)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_APPENDDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x18798120)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_APPENDRUBYANNOTATIONMESH_OFFSET UNITYSDK_OFFSET(0x18793B00)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_BUILDRUBYANNOTATIONINFOS_OFFSET UNITYSDK_OFFSET(0x18791250)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_BUILDRUBYFONTSETTINGS_OFFSET UNITYSDK_OFFSET(0x18795A20)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_BUILDRUBYGENERATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x18796250)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_BUILDRUBYPREFERREDHEIGHTINPUTS_OFFSET UNITYSDK_OFFSET(0x18794D50)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_BUILDRUBYRUNTIMEDATA_OFFSET UNITYSDK_OFFSET(0x187918F0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_CALCOVERHANGSCALE_OFFSET UNITYSDK_OFFSET(0x18797DF0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_CALCRUBYHEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x18797F10)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_CONTAINSRUBYTAGS_OFFSET UNITYSDK_OFFSET(0x18790F40)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_EMITRUBYQUADS_OFFSET UNITYSDK_OFFSET(0x18796980)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_EXTRACTRUBYANNOTATION_OFFSET UNITYSDK_OFFSET(0x18793680)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_FINDMATCHINGRUBYRIGHTTAGINDEX_OFFSET UNITYSDK_OFFSET(0x18792DC0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_FLUSHQUADS_OFFSET UNITYSDK_OFFSET(0x187973B0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETBASEFONTSIZEFOROVERHANG_OFFSET UNITYSDK_OFFSET(0x18795B10)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETEXTRAPREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x18794680)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETLINEFORCHARINDEX_OFFSET UNITYSDK_OFFSET(0x187958C0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETREQUIREDRICHTAGS_OFFSET UNITYSDK_OFFSET(0x18791100)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETRUBYGENBOUNDS_OFFSET UNITYSDK_OFFSET(0x187979B0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETRUBYMAXFONTSIZE_OFFSET UNITYSDK_OFFSET(0x18792280)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETTOTALRUBYHEIGHT_OFFSET UNITYSDK_OFFSET(0x18798030)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETUNITSPERPIXEL_OFFSET UNITYSDK_OFFSET(0x18792200)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GET_PREPROCESSORDER_OFFSET UNITYSDK_OFFSET(0x18790EA0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GET_RUBYGEN_OFFSET UNITYSDK_OFFSET(0x18790EB0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_INVALIDATEGENERATORS_OFFSET UNITYSDK_OFFSET(0x18794630)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_ISRUBYLEFTTAG_OFFSET UNITYSDK_OFFSET(0x18792D20)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_MEASURERUBYFORBASEWIDTH_OFFSET UNITYSDK_OFFSET(0x18792390)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_ONCONTENTLOST_OFFSET UNITYSDK_OFFSET(0x18794530)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_POPULATERUBYGENERATOR_OFFSET UNITYSDK_OFFSET(0x187963F0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_RESOLVEFINALMESHQUADINDEX_OFFSET UNITYSDK_OFFSET(0x187978F0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_RESOLVEREVEALINDEXFROMBASERANGE_OFFSET UNITYSDK_OFFSET(0x18797690)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_RESOLVERUBYCOLORFROMTEXTINFO_OFFSET UNITYSDK_OFFSET(0x18792830)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_TRYBUILDRUBYTAGPARAMS_OFFSET UNITYSDK_OFFSET(0x18792FB0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_TRYEXTRACTRTANNOTATION_OFFSET UNITYSDK_OFFSET(0x187932F0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_TRYGETPREFERREDVISIBLERUBYBASE_OFFSET UNITYSDK_OFFSET(0x187953D0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_TRYREADCOLORATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18793750)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_TRYREADFLOATATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x187938A0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTFEATUREDATABUILDER_REBUILDFEATUREDATA_OFFSET UNITYSDK_OFFSET(0x18795F50)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTLAYOUTADJUSTMENTPROVIDER_COLLECTLINEEXTRAHEIGHTS_OFFSET UNITYSDK_OFFSET(0x18795C10)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTLAYOUTADJUSTMENTPROVIDER_REBUILDLAYOUTADJUSTMENTINPUT_OFFSET UNITYSDK_OFFSET(0x18791870)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTMESHMODIFIER_ONRENDERMESH_OFFSET UNITYSDK_OFFSET(0x18793A10)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTPREPROCESSOR_DETECTSCONTENT_OFFSET UNITYSDK_OFFSET(0x18790FE0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTPREPROCESSOR_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x187910B0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTTYPESETCONSTRAINTPROVIDER_COLLECTTYPESETCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x18791180)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTTYPEWRITERREVEALPROVIDER_COLLECTTYPEWRITERREVEALQUADRANGES_OFFSET UNITYSDK_OFFSET(0x18794460)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x187993A0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE___BASE_GETREQUIREDRICHTAGS_OFFSET UNITYSDK_OFFSET(0x187994A0)
#define UNITYENGINE_UI_EXTENSION_RUBYFEATURE___BASE_ONCONTENTLOST_OFFSET UNITYSDK_OFFSET(0x18799530)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int RubyFeature_TypeDefinitionIndex = 74236;

	class RubyFeature : public ::UnityEngine::UI::Extension::UITextFeatureBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::RubyFeature_RubyAnnotationInfo>* _annotationInfos; // 0x20
		::UnityEngine::TextGenerator* _rubyGen; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::RubyFeature_RubyAnnotationRuntimeData>* _rubyRuntimeData; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UITextRevealQuadRange>* _typewriterRevealRanges; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::RubyFeature_RubyPreferredHeightInput>* _preferredHeightInputs; // 0x40
		::System::Collections::Generic::List_1<::System::Single>* _perLineMaxRubyHeight; // 0x48
		::Il2CppArray<::UnityEngine::UIVertex>* _tempVerts; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_PreprocessOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GET_PREPROCESSORDER_OFFSET))(this);
		}

		::UnityEngine::TextGenerator* get_RubyGen()
		{
			return ((::UnityEngine::TextGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GET_RUBYGEN_OFFSET))(this);
		}

		static ::System::Boolean ContainsRubyTags(::System::String* text)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_CONTAINSRUBYTAGS_OFFSET))(text);
		}

		::System::Boolean UnityEngine_UI_Extension_IUITextPreprocessor_DetectsContent(::System::String* rawText)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTPREPROCESSOR_DETECTSCONTENT_OFFSET))(this, rawText);
		}

		::System::String* UnityEngine_UI_Extension_IUITextPreprocessor_Preprocess(::System::String* rawText)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTPREPROCESSOR_PREPROCESS_OFFSET))(this, rawText);
		}

		::System::UInt32 GetRequiredRichTags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETREQUIREDRICHTAGS_OFFSET))(this);
		}

		::System::Void UnityEngine_UI_Extension_IUITextTypesetConstraintProvider_CollectTypesetConstraints(::UnityEngine::UI::Extension::IUITextTypesetConstraintWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::IUITextTypesetConstraintWriter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTTYPESETCONSTRAINTPROVIDER_COLLECTTYPESETCONSTRAINTS_OFFSET))(this, writer);
		}

		::System::Void UnityEngine_UI_Extension_IUITextLayoutAdjustmentProvider_RebuildLayoutAdjustmentInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTLAYOUTADJUSTMENTPROVIDER_REBUILDLAYOUTADJUSTMENTINPUT_OFFSET))(this);
		}

		::System::Void BuildRubyRuntimeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_BUILDRUBYRUNTIMEDATA_OFFSET))(this);
		}

		::System::Boolean BuildRubyAnnotationInfos()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_BUILDRUBYANNOTATIONINFOS_OFFSET))(this);
		}

		static ::System::Boolean IsRubyLeftTag(::Enum_3_96EDEAC6CE722CBE tag)
		{
			return ((::System::Boolean(*)(::Enum_3_96EDEAC6CE722CBE))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_ISRUBYLEFTTAG_OFFSET))(tag);
		}

		static ::System::Int32 FindMatchingRubyRightTagIndex(::System::Collections::Generic::IReadOnlyList_1<::Struct_2_97F90E6FB4F6D559>* tagInfos, ::System::Int32 searchFrom)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::Struct_2_97F90E6FB4F6D559>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_FINDMATCHINGRUBYRIGHTTAGINDEX_OFFSET))(tagInfos, searchFrom);
		}

		::System::String* ExtractRubyAnnotation(::System::String* preprocessedText, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_5CFCC37B3A5F59B3>* tagAttributes, ::Struct_2_97F90E6FB4F6D559 tagInfo)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_5CFCC37B3A5F59B3>*, ::Struct_2_97F90E6FB4F6D559))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_EXTRACTRUBYANNOTATION_OFFSET))(this, preprocessedText, tagAttributes, tagInfo);
		}

		::System::Boolean TryBuildRubyTagParams(::System::String* preprocessedText, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_5CFCC37B3A5F59B3>* tagAttributes, ::Struct_2_97F90E6FB4F6D559 tagInfo, ::UnityEngine::UI::Extension::RubyFeature_RubyTagParams& tagParams)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_5CFCC37B3A5F59B3>*, ::Struct_2_97F90E6FB4F6D559, ::UnityEngine::UI::Extension::RubyFeature_RubyTagParams&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_TRYBUILDRUBYTAGPARAMS_OFFSET))(this, preprocessedText, tagAttributes, tagInfo, tagParams);
		}

		static ::System::Boolean TryExtractRtAnnotation(::System::String* preprocessedText, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_97F90E6FB4F6D559>* tagInfos, ::System::Int32 searchFrom, ::System::Int32 searchTo, ::Struct_2_97F90E6FB4F6D559 rubyLeftInfo, ::Struct_2_97F90E6FB4F6D559 rubyRightInfo, ::System::String*& annotation)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_97F90E6FB4F6D559>*, ::System::Int32, ::System::Int32, ::Struct_2_97F90E6FB4F6D559, ::Struct_2_97F90E6FB4F6D559, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_TRYEXTRACTRTANNOTATION_OFFSET))(preprocessedText, tagInfos, searchFrom, searchTo, rubyLeftInfo, rubyRightInfo, annotation);
		}

		static ::System::Boolean TryReadFloatAttribute(::System::String* src, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_5CFCC37B3A5F59B3>* attributes, ::Struct_2_97F90E6FB4F6D559 tagInfo, ::System::String* name, ::System::Single& value, ::Enum_3_965E30DB043094A1& unitType)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_5CFCC37B3A5F59B3>*, ::Struct_2_97F90E6FB4F6D559, ::System::String*, ::System::Single&, ::Enum_3_965E30DB043094A1&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_TRYREADFLOATATTRIBUTE_OFFSET))(src, attributes, tagInfo, name, value, unitType);
		}

		static ::System::Boolean TryReadColorAttribute(::System::String* src, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_5CFCC37B3A5F59B3>* attributes, ::Struct_2_97F90E6FB4F6D559 tagInfo, ::System::String* name, ::UnityEngine::Color32& color)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_5CFCC37B3A5F59B3>*, ::Struct_2_97F90E6FB4F6D559, ::System::String*, ::UnityEngine::Color32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_TRYREADCOLORATTRIBUTE_OFFSET))(src, attributes, tagInfo, name, color);
		}

		::System::Void UnityEngine_UI_Extension_IUITextMeshModifier_OnRenderMesh(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTMESHMODIFIER_ONRENDERMESH_OFFSET))(this, toFill);
		}

		::System::Void UnityEngine_UI_Extension_IUITextTypewriterRevealProvider_CollectTypewriterRevealQuadRanges(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UITextRevealQuadRange>* ranges)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UITextRevealQuadRange>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTTYPEWRITERREVEALPROVIDER_COLLECTTYPEWRITERREVEALQUADRANGES_OFFSET))(this, ranges);
		}

		::System::Void OnContentLost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_ONCONTENTLOST_OFFSET))(this);
		}

		::System::Void InvalidateGenerators()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_INVALIDATEGENERATORS_OFFSET))(this);
		}

		::System::Single GetExtraPreferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETEXTRAPREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Boolean BuildRubyPreferredHeightInputs()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_BUILDRUBYPREFERREDHEIGHTINPUTS_OFFSET))(this);
		}

		static ::System::Boolean TryGetPreferredVisibleRubyBase(::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo>* characters, ::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>* lines, ::System::Int32 lineCount, ::System::String* txt, ::System::Int32 charBeginIndex, ::System::Int32 charEndIndex, ::System::Single unitsPerPixel, ::System::Int32 maxLineLimit, ::System::Int32& lineIndex, ::System::Single& baseWidth)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::UnityEngine::UICharInfo>*, ::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_TRYGETPREFERREDVISIBLERUBYBASE_OFFSET))(characters, lines, lineCount, txt, charBeginIndex, charEndIndex, unitsPerPixel, maxLineLimit, lineIndex, baseWidth);
		}

		::UnityEngine::TextGenerationSettings BuildRubyFontSettings(::System::Single rubyFontScale)
		{
			return ((::UnityEngine::TextGenerationSettings(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_BUILDRUBYFONTSETTINGS_OFFSET))(this, rubyFontScale);
		}

		::System::Int32 GetRubyMaxFontSize(::System::Single rubyFontScale)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETRUBYMAXFONTSIZE_OFFSET))(this, rubyFontScale);
		}

		::System::Single GetBaseFontSizeForOverhang()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETBASEFONTSIZEFOROVERHANG_OFFSET))(this);
		}

		::System::Single GetUnitsPerPixel()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETUNITSPERPIXEL_OFFSET))(this);
		}

		static ::System::Int32 GetLineForCharIndex(::System::Int32 charIdx, ::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>* lines, ::System::Int32 lineCount)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Collections::Generic::IList_1<::UnityEngine::UILineInfo>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETLINEFORCHARINDEX_OFFSET))(charIdx, lines, lineCount);
		}

		::System::Void UnityEngine_UI_Extension_IUITextLayoutAdjustmentProvider_CollectLineExtraHeights(::UnityEngine::UI::Extension::IUITextLineExtraHeightWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::IUITextLineExtraHeightWriter*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTLAYOUTADJUSTMENTPROVIDER_COLLECTLINEEXTRAHEIGHTS_OFFSET))(this, writer);
		}

		::System::Void UnityEngine_UI_Extension_IUITextFeatureDataBuilder_RebuildFeatureData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTFEATUREDATABUILDER_REBUILDFEATUREDATA_OFFSET))(this);
		}

		::System::Void AppendRubyAnnotationMesh(::UnityEngine::UI::VertexHelper* verts)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_APPENDRUBYANNOTATIONMESH_OFFSET))(this, verts);
		}

		::System::Void AddRubyTypewriterRevealRanges(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>* charInfos, ::UnityEngine::UI::Extension::BaseTextMeshRange baseTextMeshRange, ::UnityEngine::UI::Extension::RubyFeature_RubyAnnotationRuntimeData data, ::System::Int32 pendingQuadStart, ::System::Int32 addedQuadCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>*, ::UnityEngine::UI::Extension::BaseTextMeshRange, ::UnityEngine::UI::Extension::RubyFeature_RubyAnnotationRuntimeData, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_ADDRUBYTYPEWRITERREVEALRANGES_OFFSET))(this, charInfos, baseTextMeshRange, data, pendingQuadStart, addedQuadCount);
		}

		::System::Void AddTypewriterRevealRange(::System::Int32 quadStart, ::System::Int32 quadCount, ::System::Int32 revealIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_ADDTYPEWRITERREVEALRANGE_OFFSET))(this, quadStart, quadCount, revealIndex);
		}

		static ::System::Int32 ResolveRevealIndexFromBaseRange(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>* charInfos, ::UnityEngine::UI::Extension::BaseTextMeshRange baseTextMeshRange, ::UnityEngine::UI::Extension::RubyFeature_RubyAnnotationRuntimeData data, ::System::Int32 rubyQuadIndex, ::System::Int32 rubyQuadCount)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>*, ::UnityEngine::UI::Extension::BaseTextMeshRange, ::UnityEngine::UI::Extension::RubyFeature_RubyAnnotationRuntimeData, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_RESOLVEREVEALINDEXFROMBASERANGE_OFFSET))(charInfos, baseTextMeshRange, data, rubyQuadIndex, rubyQuadCount);
		}

		static ::System::Int32 ResolveFinalMeshQuadIndex(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>* charInfos, ::UnityEngine::UI::Extension::BaseTextMeshRange baseTextMeshRange, ::System::Int32 baseGi)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>*, ::UnityEngine::UI::Extension::BaseTextMeshRange, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_RESOLVEFINALMESHQUADINDEX_OFFSET))(charInfos, baseTextMeshRange, baseGi);
		}

		::UnityEngine::Color32 ResolveRubyColorFromTextInfo(::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>* charInfos, ::System::Int32 giBegin, ::System::Int32 giEnd, ::UnityEngine::UI::Extension::RubyFeature_RubyTagParams tagParams)
		{
			return ((::UnityEngine::Color32(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::NAP_CharacterInfo>*, ::System::Int32, ::System::Int32, ::UnityEngine::UI::Extension::RubyFeature_RubyTagParams))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_RESOLVERUBYCOLORFROMTEXTINFO_OFFSET))(this, charInfos, giBegin, giEnd, tagParams);
		}

		::System::Void GetRubyGenBounds(::System::Single unitsPerPixel, ::System::Single& rubyLeft, ::System::Single& rubyRight, ::System::Single& rubyBottom, ::System::Single& rubyTop)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETRUBYGENBOUNDS_OFFSET))(this, unitsPerPixel, rubyLeft, rubyRight, rubyBottom, rubyTop);
		}

		::UnityEngine::UI::Extension::RubyFeature_RubyMeasureResult MeasureRubyForBaseWidth(::UnityEngine::UI::Extension::RubyFeature_RubyTagParams tagParams, ::System::Single baseWidth, ::System::Int32 maxFontSize, ::System::Single unitsPerPixel)
		{
			return ((::UnityEngine::UI::Extension::RubyFeature_RubyMeasureResult(*)(::PVOID, ::UnityEngine::UI::Extension::RubyFeature_RubyTagParams, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_MEASURERUBYFORBASEWIDTH_OFFSET))(this, tagParams, baseWidth, maxFontSize, unitsPerPixel);
		}

		::UnityEngine::TextGenerationSettings BuildRubyGenerationSettings(::System::Single baseWidth, ::System::Int32 maxFontSize)
		{
			return ((::UnityEngine::TextGenerationSettings(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_BUILDRUBYGENERATIONSETTINGS_OFFSET))(this, baseWidth, maxFontSize);
		}

		::System::Boolean PopulateRubyGenerator(::System::String* annotation, ::UnityEngine::TextGenerationSettings rubySettings)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_POPULATERUBYGENERATOR_OFFSET))(this, annotation, rubySettings);
		}

		::System::Single CalcOverhangScale(::System::Single baseWidth, ::System::Single rubyWidth, ::System::Single baseFontSize, ::System::Single unitsPerPixel, ::UnityEngine::UI::Extension::RubyFeature_RubyTagParams tagParams)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::UI::Extension::RubyFeature_RubyTagParams))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_CALCOVERHANGSCALE_OFFSET))(this, baseWidth, rubyWidth, baseFontSize, unitsPerPixel, tagParams);
		}

		::System::Single CalcRubyHeightOffset(::System::Single fontSize, ::System::Single overhangScale, ::System::Single unitsPerPixel, ::UnityEngine::UI::Extension::RubyFeature_RubyTagParams tagParams)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::UI::Extension::RubyFeature_RubyTagParams))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_CALCRUBYHEIGHTOFFSET_OFFSET))(this, fontSize, overhangScale, unitsPerPixel, tagParams);
		}

		::System::Void EmitRubyQuads(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* waitAddVert, ::System::Single unitsPerPixel, ::System::Single overhangScale, ::System::Single rubyCenter, ::System::Single rubyBottom, ::System::Single offsetX, ::System::Single offsetY, ::UnityEngine::Color32 color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_EMITRUBYQUADS_OFFSET))(this, waitAddVert, unitsPerPixel, overhangScale, rubyCenter, rubyBottom, offsetX, offsetY, color);
		}

		::System::Void FlushQuads(::UnityEngine::UI::VertexHelper* verts, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* waitAddVert)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_FLUSHQUADS_OFFSET))(this, verts, waitAddVert);
		}

		::System::Single GetTotalRubyHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_GETTOTALRUBYHEIGHT_OFFSET))(this);
		}

		::System::Void AppendDebugInfo(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE_APPENDDEBUGINFO_OFFSET))(this, sb);
		}

		::System::UInt32 __base_GetRequiredRichTags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE___BASE_GETREQUIREDRICHTAGS_OFFSET))(this);
		}

		::System::Void __base_OnContentLost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_RUBYFEATURE___BASE_ONCONTENTLOST_OFFSET))(this);
		}
	};
}
