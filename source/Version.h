///////////////////////////////////////////////////////////////////////////////
// FileName:    Version.h
// Created:     2007/11/01
// Author:      titilima
// CopyRight:   Titi Studio (?) 2001-2013
//-----------------------------------------------------------------------------
// Information: Version Information
///////////////////////////////////////////////////////////////////////////////

#pragma once

#define PDBEXP_VER          1.2.0.1
#define PDBEXP_RCVER        1,2,0,1
#define PDBEXP_VERSTR       "1.2.0.1"
#define PDBEXP_RCVERSTR     "1,2,0,1"

#define PDBEXP_WNDCAPTION           _T("PDB Explorer v")##_T(PDBEXP_VERSTR)

///////////////////////////////////////////////////////////////////////////////
// Version Logs
//=============================================================================
// v1.2.0
//   * Port to WTL.
// v1.11.223 - 2009.08.18
//            * PDL Version: 0.02.128
//            * 开源版本。
// v1.10.0217 - 2009.07.27
//            * PDL Version: 0.01.117
//            * 增加对 typedef 和 class 的支持。
//            * 下载 PDB 增加对 NB10 签名的支持。
//            * 将数据类型抽象为 CSym 及各个子类。
//            * 修正枚举类型的 bug。
// v1.03.039 - 2009.04.15
//           * 优化了代码的大小。
//           * 优化了下载 PDB 文件功能的用户体验。
//           * 对 PE 映像中取得的 PDB 文件名进行了路径判断。
// v1.02.035 - 2008.11.19
//           * 工程更新为 VS2008。
//           * 解决 DIA 库版本不兼容的问题。
//           * 可自由下载 PDB 文件。
//           * 修正了文件重复拖放导致程序崩溃的 bug 。
// v1.01.025 - 2007.12
//           * 优化了符号加载的速度。
//           * 增加了文件拖放的支持。
//           * 加入一款黑色皮肤。
// v1.00.023 - 2007.11
//           * 只支持 struct、union 和 enum。
//           * 支持整理功能。
///////////////////////////////////////////////////////////////////////////////
