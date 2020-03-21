-- phpMyAdmin SQL Dump
-- version 4.9.0.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Mar 21, 2020 at 07:15 AM
-- Server version: 10.4.6-MariaDB
-- PHP Version: 7.3.9

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `apmh_db`
--

-- --------------------------------------------------------

--
-- Table structure for table `admin`
--

CREATE TABLE `admin` (
  `id_account` int(8) NOT NULL,
  `username` varchar(25) NOT NULL,
  `pass` varchar(25) NOT NULL,
  `level` varchar(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `admin`
--

INSERT INTO `admin` (`id_account`, `username`, `pass`, `level`) VALUES
(1, 'admin', 'admin', '1');

-- --------------------------------------------------------

--
-- Table structure for table `barang`
--

CREATE TABLE `barang` (
  `kdkat` varchar(5) NOT NULL,
  `kdbrg` int(11) NOT NULL,
  `nmbrg` varchar(50) NOT NULL,
  `kdmerk` int(11) NOT NULL,
  `hrgbeli` double NOT NULL,
  `hrgjual` double NOT NULL,
  `Gambar` text NOT NULL,
  `Stok` int(5) NOT NULL,
  `speksifikasi` text NOT NULL,
  `ket` text NOT NULL,
  `tglmask` datetime NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `barang`
--

INSERT INTO `barang` (`kdkat`, `kdbrg`, `nmbrg`, `kdmerk`, `hrgbeli`, `hrgjual`, `Gambar`, `Stok`, `speksifikasi`, `ket`, `tglmask`) VALUES
('K01', 1, 'Lampu Hias', 1, 15000, 20000, 'images.png', 10, 'Barang terbaru dan terupdate, dijamin aman dan awet.', 'New Brand.', '2020-03-17 00:00:00');

-- --------------------------------------------------------

--
-- Table structure for table `detail_jual`
--

CREATE TABLE `detail_jual` (
  `iddetail` int(5) NOT NULL,
  `nofaktur` varchar(13) NOT NULL,
  `jumlah` int(3) NOT NULL,
  `kdbrg` int(11) NOT NULL,
  `subtotal` double NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `detail_jual`
--

INSERT INTO `detail_jual` (`iddetail`, `nofaktur`, `jumlah`, `kdbrg`, `subtotal`) VALUES
(1, '02775', 1, 1, 20000);

-- --------------------------------------------------------

--
-- Table structure for table `kategori`
--

CREATE TABLE `kategori` (
  `kdkat` varchar(5) NOT NULL,
  `kategori` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `kategori`
--

INSERT INTO `kategori` (`kdkat`, `kategori`) VALUES
('1', 'Fashion');

-- --------------------------------------------------------

--
-- Table structure for table `keranjang`
--

CREATE TABLE `keranjang` (
  `iddetail` int(5) NOT NULL,
  `nofaktur` varchar(13) NOT NULL,
  `jumlah` int(3) NOT NULL,
  `kdbrg` int(11) NOT NULL,
  `subtotal` double NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `keranjang`
--

INSERT INTO `keranjang` (`iddetail`, `nofaktur`, `jumlah`, `kdbrg`, `subtotal`) VALUES
(1, '02775', 1, 1, 20000);

-- --------------------------------------------------------

--
-- Table structure for table `konsumen`
--

CREATE TABLE `konsumen` (
  `idkonsumen` varchar(13) NOT NULL,
  `nama` varchar(50) NOT NULL,
  `alamat` text NOT NULL,
  `provinsi` varchar(20) NOT NULL,
  `kota` varchar(30) NOT NULL,
  `kodepos` varchar(5) NOT NULL,
  `phone` varchar(20) NOT NULL,
  `email` text NOT NULL,
  `nama_bank` varchar(40) NOT NULL,
  `cabang` varchar(40) NOT NULL,
  `atas_nama` varchar(50) NOT NULL,
  `rek` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `konsumen`
--

INSERT INTO `konsumen` (`idkonsumen`, `nama`, `alamat`, `provinsi`, `kota`, `kodepos`, `phone`, `email`, `nama_bank`, `cabang`, `atas_nama`, `rek`) VALUES
('1', 'Rizki Alam Ramdhani', 'Panyingkiran', 'Jawa Barat', 'Majalengka', '45452', '02338584', 'rizki@gmail.com', 'BCA', 'Majalengka', 'Rizki Alam', '987654321');

-- --------------------------------------------------------

--
-- Table structure for table `merek`
--

CREATE TABLE `merek` (
  `kdmerek` int(11) NOT NULL,
  `merk` varchar(20) NOT NULL,
  `mgambar` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `merek`
--

INSERT INTO `merek` (`kdmerek`, `merk`, `mgambar`) VALUES
(1, 'New Brand', 'images.png');

-- --------------------------------------------------------

--
-- Table structure for table `pesan`
--

CREATE TABLE `pesan` (
  `nofaktur` varchar(13) NOT NULL,
  `tdkonsumen` varchar(13) NOT NULL,
  `grandtotal` double NOT NULL,
  `tgljual` varchar(10) NOT NULL,
  `tanggal` varchar(2) NOT NULL,
  `bulan` varchar(9) NOT NULL,
  `tahun` varchar(4) NOT NULL,
  `status` varchar(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `pesan`
--

INSERT INTO `pesan` (`nofaktur`, `tdkonsumen`, `grandtotal`, `tgljual`, `tanggal`, `bulan`, `tahun`, `status`) VALUES
('02775', '01', 20000, '19 Maret 2', '19', 'maret', '2020', '1');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `admin`
--
ALTER TABLE `admin`
  ADD PRIMARY KEY (`id_account`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `admin`
--
ALTER TABLE `admin`
  MODIFY `id_account` int(8) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
